#include<stdio.h>
void main()
{
	int a=10,b=4,c=3;
	a +=b; 
	b -=c; 
	c *=a; 
	a *=b;
	a /=c;
	printf("%d %d %d %d %d ",a,b,c,a,a);
}
