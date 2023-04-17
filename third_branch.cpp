#include<stdio.h>
int main(void)
{
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