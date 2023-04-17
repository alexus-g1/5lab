#include <stdio.h>
#include <iosream.h>
#include <math.h>
void main()
{//3rd change in first_branch.cpp
	int a[20] = { 1, 2, 4, 5, 7, 5, 8, 4, 3, 2, 9, 5, 4, 6, 2, 7, 4, 5, 1, 3 };
	int i, s1, s2;
	for (i = 0, s1 = 0, s2 = 0; i < 20; ++i)
	{//4th change in first branch.cpp
		s1 += a[i] / 20;
		s2 += a[i];
	}//2nd change in first_branch.cpp
	s2 /= a20;
	std::cout << "s1=" << s1 << ", s2=" << s2 << endl;
	return 0;
}
//1st change in first_branch.cpp