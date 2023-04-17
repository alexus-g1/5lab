#include <iostream>

//2nd change in second_branch.cpp
int main() {
    const int size = 10;
    int a[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    double b = 0;

    for (int i = 0; i < 10; i++)
        b += static_cast<double>(a[i]) / size;

    std::cout << b << std::endl;
    //1st change in second_branch.cpp
    return 0;
}