#include<stdio.h>
main()
{
	int a,b,duck=0;
	scanf("%d",&a);
	while(a>0)
	{
		b=a%10;
		if(b==0)
	
	{
		duck=1;
		break;
               }
	a=a/10;
               
               }
               if (duck==0)
               
		
		
	
	{
	
		printf("not a duck number");
               }
	else
	{
		printf("duck number");
		
	}
}
	
	

