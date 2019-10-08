#include<stdio.h>
void main()
{
	int a,b;
	
	void swap(int *,int *);
	printf("eter the two number\n");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("%d  %d",a,b);
}
void swap(int *p,int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
