#include "windows.h"
#include <stdlib.h>
#include <stdio.h>

double Hello(unsigned int* begin, unsigned int* end, int size)
{
    if ((begin + 1) == end) 
        return (double)(*begin + *(begin + 1)) / size;
    else if (begin + 2 == end) 
        return (double)(*begin + *(begin + 1) + *(begin + 2)) / size;
    else                     
        return (double)(*begin + *(begin + 1)) / size + (double)Hello(begin + 2, end, size);
}

int main()
{
    unsigned int X[1000];
    unsigned int i;
    double result;

    srand(GetTickCount());
    for (i = 0; i < 1000; i++)
    {
        X[i] = rand() % 100;
    }

    result = Hello(X, &X[999], 1000);

    return 0;
}