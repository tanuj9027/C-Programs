#include<stdio.h>
#include<string.h>
void main()
{
	char s[20];
	int l;
	printf("enter the name of your city");
	gets(s);
	l=strlen(s);
    printf("the string %s of length %d ",s,l);	
}
