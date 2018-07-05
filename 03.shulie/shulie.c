#include <stdio.h>
#include <stdlib.h>


//7.数据12123211234321......前40项
main()
{
 int k=1,m=2;
 int n,i,j;
 
 scanf("%4d",&n);
 j=1;
 printf("%4d",k);
 for(i=1; i<n; i++)
 {
  if(k==m)
  {
   j=-1;
   m=m+1;
  }
  else if(k==1)
  {
   j=1;
   k=k+j;
   printf("%4d",k);
  }
  printf("\n");
 }
}
