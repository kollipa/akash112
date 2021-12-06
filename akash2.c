#include<stdio.h>;
main()
{
	int a,b;
	printf("read the values of a and b");
	scanf("%d\n%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d\n%d",a,b);
}
