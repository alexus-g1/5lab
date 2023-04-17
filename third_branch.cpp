#include<stdio.h>
int main(void)
{//1st change in third_branch.cpp
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    while (b) {
        c = a % b;
        a = b;
        b = c;
    }
    printf("%d", a);
    getchar();
}