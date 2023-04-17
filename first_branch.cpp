#include <stdio.h>
#include <iosream.h>
#include <math.h>
void main()
{
	int a[20] = { 1, 2, 4, 5, 7, 5, 8, 4, 3, 2, 9, 5, 4, 6, 2, 7, 4, 5, 1, 3 };
	int i, s1, s2;
	for (i = 0, s1 = 0, s2 = 0; i < 20; ++i)
	{
		s1 += a[i] / 20;
		s2 += a[i];
	}
	s2 /= a20;
	std::cout << "s1=" << s1 << ", s2=" << s2 << endl;
	return 0;
}