#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b+c==180)
	{
		printf("triangle exists");
	}
	else
	{
		printf("triangle does not exist");
	}
}
