#include<stdio.h>
int main(void)
{//1st change in third_branch.cpp
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    while (b) {
        c = a % b;//4th change in third_branch.cpp
        a = b;
        b = c;
    }//2nd change in third_branch.cpp
    printf("%d", a);
    getchar();
}
//3rd change in third_branch.cpp