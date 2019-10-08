#include<stdio.h>
void main()
{
	binary_search();
	int t;
	int a[]={1,2,3,4,5,7,8,9};
	 t=binary_search(a,8,5);
	 printf("%d",t);
}
binary_search(int x[],int r,int key)
{
	int l=0,mid;
	for(;l<=r;)
	{
		mid=((0+(r-1))/2);
		if(key>=mid)
		{
			mid=l;
		}
		else
		mid=r;		
	}
	if(mid==key)
	return l;
	else
	return 0;
}
