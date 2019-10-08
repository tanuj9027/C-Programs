#include<stdio.h>
#include<string.h>
void main()
{
	char s[20];
	int i,t;
	printf("enter string");
	gets(s);
	t=strlen(s);
	for(i=t-1;i>=0;i--)
	printf("%c",s[i]);
}
