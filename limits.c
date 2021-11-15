#include<stdio.h>
#include<limits.h>
void main()
{
	printf("short int:\nSinged: %hd to %hd\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned:%d to %hu\n", 0, USHRT_MAX);
	
	printf("int:\nSigned: %d to %d\n", INT_MIN, INT_MAX);
	printf("unsigned:%u to %u\n", 0, INT_MAX);
	
	printf("long int:\nsigned: %ld to %ld\n", LONG_MIN, LONG_MAX);
	printf("unsigned:%lu to %lu\n", 0, LONG_MAX);
	
	printf("long long int:\nsinged: %lld to %lld\n", LONG_LONG_MIN, LONG_LONG_MAX);
	printf("unsinged:%llu to %llu", 0, ULONG_LONG_MAX);
}
