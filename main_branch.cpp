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
//4th change in main_branch.cpp
int main()
{
    unsigned int X[1000];
    unsigned int i;
    double result;
    //3rd change in main_branch.cpp
    srand(GetTickCount());
    for (i = 0; i < 1000; i++)
    {
        X[i] = rand() % 100;
    }
    //2nd change in main_branch.cpp
    result = Hello(X, &X[999], 1000);

    return 0;
}