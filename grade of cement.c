#include<stdio.h>
void main()
{
  int h,t;
  float c;
  printf("enter the hardness,crabon,tensile\n");
  scanf("%d%f%d",&h,&c,&t);
  if(h>50&&c<0.7&&t>5600)
  {
  	printf("grade 10 ");
  }
  else if(h>50&&c<0.7)
  printf("grade 9");
  else if(c<0.7&&t>5600)
  printf("grade 8");
  else if (h<50&&t>5600)
  printf("grade 7");
  else if(h>50||c<0.7||t>5600)
  printf("grade 6");
  else if(!h>50||!c<0.7||!t>5600)
  printf("grade 5");
}
