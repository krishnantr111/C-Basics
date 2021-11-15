#include<stdio.h>
void main()
{
	int min, hr, a;
	min = 888;
	hr = min/60;
	a = min%60;
	printf("%dmins\n",min);
	printf("%dhours.%dmins",hr,a);
}
