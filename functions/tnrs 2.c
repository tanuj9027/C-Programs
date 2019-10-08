#include<stdio.h>
void main()
{
	int sum();
    int r;
	r=sum();
	printf("%d",r);
}
int sum()
{
	int a,i,t=0;
	printf("enter the number");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		t=t+i;
	}
	
	return t;
}
