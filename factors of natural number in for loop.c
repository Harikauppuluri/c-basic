#include<stdio.h>
main()
{
	int n,i,factors;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d ",i);
		}
	}
	
}
