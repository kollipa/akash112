#include<stdio.h>
int main()
{
	float i,n,x,sum=0;
	scanf("%f",&n);
	scanf("%f",&x);
	
	for(i=1;i<=n;i++)
{
	sum=sum+x/i;
}
printf("%f",sum);
}
