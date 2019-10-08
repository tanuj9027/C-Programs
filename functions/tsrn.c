#include<stdio.h>
void main()
{
  void sum(int);
	int a;
    printf("enter the number");
    scanf("%d",&a);
    sum(a);

}
void sum(int n)
{
	int i,t=0;
	for(i=1;i<=n;i++)
	{
		t=t+i;
	}
	printf("sumof digits are%d",t);
}
