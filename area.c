#include<stdio.h>
pie=3.14;
int main()
{
	int r;
	float area;
	printf("enter the values of radius");
	scanf("%d",&r);
	area=pie*r*r;
	printf("the total area of the circle is %f",area);
	return 0;
}
