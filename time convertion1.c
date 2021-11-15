#include<stdio.h>
void main()
{
	int min, hr, t;
	hr = 14;
	min = 48;
	t = 60*hr+min;
	
	printf("%dhrs%dmins\n\n", hr, min);
	printf("%dmins",t);
}
