#include<stdio.h>
void main()
{
	int n = 8;
	int s = n*(n+1)/2;
	printf("sum of frist %d natural numbers is %d\n", n, s);
	int g = n*(n+1);
	printf("sum of frist %d even natural numbers is %d\n", n, g);
	int t = n*n;
	printf("sum of frist %d odd natural numbers is %d\n", n, t);
}
