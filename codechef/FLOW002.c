#include<stdio.h>
int main()
{
	int n,i,a,b,t;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&a,&b);
		t=a%b;
		printf("%d",t);
	}
	return 0;
}
