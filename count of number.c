#include<stdio.h>
void main()
{
	int a,t;
	printf("enter the no");
	scanf("%d",&a);
	while(a>0)
	{
		a=a/10;
		t++;
	}
	printf(" %d",t);
}
