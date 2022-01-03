#include<stdio.h>
int main()
{
	int a,*p;
	a=23;
	printf("%d",sizeof(a));
	p=&a;
	printf("\n%d",sizeof(p));
}
