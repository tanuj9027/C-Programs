#include<stdio.h>
#include<string.h>
void main()
{
	char a[10];
	int t;
	printf("enter the number");
	gets(a);
	t=strupr(a);
	puts(t);
}
