#include<stdio.h>
main()
{
	float radius,area,perimeter;
	printf("enter the radius value");
	scanf("%f",&radius);
	area=3.14*radius*radius;
	perimeter = 2*3.14*radius;
	printf(" area is %f ,perimeter is %f",area,perimeter);
}
