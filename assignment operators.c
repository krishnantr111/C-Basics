#include<stdio.h>
void main ()
{
	int a=5,b=10;
	a +=b; 
	b +=a; 
	printf("%d %d",a,b);
	a -=b;
	b -=a;
	printf("\n%d %d",a,b);
}
