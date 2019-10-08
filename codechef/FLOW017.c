#include<stdio.h>
int main()
{
	int p,i,a,b,c;
	scanf("%d",&p);
	for(i=1;i<=p;i++)
	{
	scanf("%d %d %d",&a,&b,&c);
	if((a>b)&&(a>c))
	{
		if(b>c)
		printf("%d\n",b);
		else
		printf("%d\n",c);
	}
	if((b>a)&&(b>c))
	{
		if(a>c)
		printf("%d\n",a);
		else
		printf("%d\n",c);
	}
	if((c>a)&&(c>b))
	{
		if(a>b)
		printf("%d\n",a);
		else
		printf("%d\n",b);
	}
	}
	return 0;
}
