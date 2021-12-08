#include<stdio.h>
main()
{
	int a;
	float c,f;
	scanf("%d",&a);
	if(a<50)
	{
		c=a*0.50;
	}
	else
	if(a<150)
	{
		c=50*0.50+(a-150)*0.75;
	}
	else
	if(a<250)
	{
		c=50*0.50+150*0.75+(a-250)*1.20;
	}
	else
	{
		c=50*0.50+150*0.75+250*1.20+(a-250)*1.50;
	}
	f=(c*20)/100;
	printf("%d",c+f);
}
