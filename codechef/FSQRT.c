#include<stdio.h>
#include<math.h>
int main()
{
	int n,t,i,p;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&t);
		p=sqrt(t);
		printf("%d\n",p);
	}
	return 0;
	
}
