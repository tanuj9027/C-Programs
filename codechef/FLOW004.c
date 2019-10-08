#include<stdio.h>
int main()
{
	int a,i,t,p,sum=0;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		scanf("%d",&p);
		t=p%10;
		for(;p!=0;i++)
		{
		p=p/10;
		}
		sum=p+t;
		printf("%d",sum);
	}
	return 0;
}
