#include<stdio.h>
int main()
{
	int i,a=-1,b=1,t;
	for(i=0;i<=25;i++)
	{
		t=a+b;
		printf("%d ",t);
		a=b;
		b=t;
	}
}
