#include<stdio.h>
#include<string.h>
void main()
{
	char a[20];
	printf("enter the string");
	gets(a);
	for(i=0;i!='\0';i++)
	{
	 if(a[i]>'a' && a[i]<'z')
	  a[i]=a[i]-32;
	  printf("%s",a[i]);
    }
    
