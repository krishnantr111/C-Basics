#include<stdio.h>
void main()
{
	//variable declaration
	int phy, che, mat, eng;
	
	//initialization
	phy=80;
	che=80;
	mat=80;
	eng=80;
	
	//caliculation
	int tot=phy+che+mat+eng;

	//output 
	printf("Teja marks in physics: %d\n",phy);
	printf("Teja marks in chemistry: %d\n",che);
	printf("Teja marks in maths: %d\n",mat);
	printf("Teja marks in english: %d\n",eng);
	printf("Total: %d",tot);
}
