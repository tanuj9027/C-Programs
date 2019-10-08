#include<stdio.h>
void main()
{
int sum(int);
    int a,p;
	printf("enter the number");
	scanf("%d",&a);
	p=sum(a);
	printf("%d",p);
}
int sum(int n)
{
	int i,a,s=0;
	for(i=1;i<=a;i++)
	{
		s=s+i;
	}
	return s;
}

