#include<stdio.h>
main()
{
	int a,b,c,d,e;
	float percentage;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	percentage=(a+b+c+d+e)/5*100;
	if(percentage>90)
	{
		printf("A");
	}
	else
	if(percentage>80)
	{
		printf("B");
	}
	else
	if(percentage>70)
	{
		printf("C");
	}
	else
	if(percentage>40)
	{
		printf("D");
	}
	else
	if(percentage<40)
	{
		printf("E");
		
	}
}
