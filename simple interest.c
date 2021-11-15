#include<stdio.h>
void main()
{
	int p,t,s;
	p = 10000;
	t = 2;
	float r = 7.5;
	s = p*t*r/100;
		
	printf("the simple interest when\n");
	printf("the princpal amount is %d\n",p);
	printf("time in years is %d\n",t);
	printf("rate of interest is %f\n",r);
	printf("the simple interest %d\n",s);
}
