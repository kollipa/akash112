#include<stdio.h>
int main()
{
	char a,*p;
	double b,*d;
	a='f';
	b=2.3333333333333;
	printf("%p",&a);
	printf("\n%c",a);
	printf("\n%p",&b);
	printf("\n%lf",b);
	p=&a;
	d=&b;
	printf("\n%p",p);
	printf("\n%c",*p);
	printf("\n%p",d);
	printf("\n%lf",*d);
}
