#include<stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	if(a%5==0 && a%11==0)
	{
		printf("it is divisible");
	}
	else
	{
		printf("it is not divisible");
	}
}
