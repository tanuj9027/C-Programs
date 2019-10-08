#include<stdio.h>
void main()
{
	int fib(int);
	int a,s,i;
	printf("entter the number");
	scanf("%d",&a);
	for (i=1;i<=a;i++)
	s=fib(i);
	printf("%d",s);
	
}
int fib(int n)
{
	if(n==1||n==2)
	return 1;
	else
	return (fib(n-1)+fib(n-2));
	
}
