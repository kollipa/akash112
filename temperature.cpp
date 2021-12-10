#include<stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	if(a<0)
	{
		printf("freezing wether");
	}
	else
	if(a<10)
	{
		printf("very vcold wether");
	}
	else
	if(a<20)
	{
		printf("cold wether");
	}
	else
	if(a<30)
	{
		printf("normal in temp");
	}
	else
	if(a<40)
	{
		printf("hot");
	}
	else
	if("a>40")
	{
		printf("very hot");
	}
}
