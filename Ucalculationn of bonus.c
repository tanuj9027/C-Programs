# include<stdio.h>
void main()
{
	int yoj,cy ,
	total,bonus;
	printf("enter the year of joining and current year\n");
	scanf("%d%d",&yoj,&cy);
	total=(yoj-cy);
	if(total>3)
	{
		bonus=2500;
		printf("bonus rupees =%d",bonus);
	}
}
