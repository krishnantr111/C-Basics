#include<stdio.h>
void main()
{
	int a,b,s,d,p,q,r,t;
	a = 10;
	b = 2;
	s = a+b;
	d = a-b;
	p = a*b;
	q = a/b;
	r = a%b;
	t = s+d+q+p+r;
	
	printf("sum of %d and %d is %d\n", a, b, s);
    printf("difference of %d and %d is %d\n", a, b, d);
    printf("product of %d and %d is %d\n", a, b, p);	
	printf("Quatient when %d is divided by %d is %d\n", a, b, q);
	printf("remainder when %d is divided by %d is %d\n", a, b, r);
	printf("sum of all the arithmetic operations is %d", t);
}
