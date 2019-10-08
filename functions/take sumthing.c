#include<stdio.h>
void main()
{
	void add(int,int);
	int a,b;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    add(a,b);
    
}
void add(int x,int y)
{
	int c;
	c=x+y;
	printf("%d",c);
}
