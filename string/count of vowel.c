#include<stdio.h>
#include<string.h>
void main()
{
	char name[100],vowel[]="aeiouAEIOU";
	int i,j,count;
	printf("enter the string");
	gets(name);
	for (i=0;name[i]!='\0';i++)
	{
		for(j=0;vowel[j]!='\0';j++)
		{
			if(name[i]==vowel[j])
			{
				count++;
				break;
		    }
		}
	}
	printf("the vowel are%d",count);
}
