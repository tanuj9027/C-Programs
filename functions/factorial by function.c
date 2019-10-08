#include<stdio.h>
void main()
{
	int factorial(int );
	int a,s;
	printf("enter the number");
	scanf("%d",&a);
	s=factorial(a);
	printf("%d",s);
	
}
int factorial(int n)
{
 int i,sum=1;
 for(i=1;i<=n;i++)
{
	sum=sum*i;
}
return (sum);
}
