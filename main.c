#include <stdio.h>
int main(void)
{
 float  l1,l2,h,p,s,area;
  
  printf("Enter L1 = ");
  scanf("%f",&l1);
  printf("Enter L2 = ");
  scanf("%f",&l2);
  printf("Enter Height = ");
  scanf("%f",&h);
  p = ((l2-l1)/l1)*100;
  s = l1+l2;
  if(p>=40){
   area = 0.5*h*s;
   printf("Area = %f ",area);
   }
  else{
   printf("No calculate L2 less than L1 %.2f percent",p);
   }
	return 0;
}
