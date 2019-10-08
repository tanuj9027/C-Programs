#include<stdio.h>
void main()
{
	int sum(int);
	int n,t;
	printf("enter the number to do sum");
	scanf("%d",&n);
	t=sum(n);
	printf("%d",t);

}
int sum(int a)
{
	int s;
	if(a==1)
		return a;
	else
		s=a+sum(a-1);
			return s;
}

