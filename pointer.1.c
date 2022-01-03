#include<stdio.h>
int main()
{
	int a,*p;
	float b,*c;
	a=25;
	b=36.2345;
	p=&a;
	c=&b;
	printf("%p",&a);
	printf("\n%d",a);
	printf("\n%p",&b);
	printf("\n%f",b);
	printf("\n%p",p);
	printf("\n%d",*p);
	printf("\n%p",c);
	printf("\n%f",*c);
}
