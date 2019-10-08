#include<stdio.h>
int main()
{
	int a,i,n;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		scanf("%d",&n);
		if(n<10)
		printf("What an obedient servant you are!\n");
		else 
		printf("-1\n");
	}
	return 0;
}
