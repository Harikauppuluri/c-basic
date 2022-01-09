#include<stdio.h>
main()
{
	int n,r,e=0,o=0,z=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r==0)
	
	
	{
		z++;
	}
	else if (r%2==0)
	{
		e++;
	}
	else
	{
		o++;
	}
	n= n/10;
               }
                   printf("%deven %d odd %d zero",e ,o ,z);
}
