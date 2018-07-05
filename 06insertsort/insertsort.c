#include <stdio.h>
#include <stdlib.h>

main()
{
 int i,j,t,n=10;
 int a[10]={3,5,0,8,9,2,1,6,4,7};
 for(i-1; i<n; i++)
 {
  t=a[i];
  j=i-1;
  while(t<a[j]&&j>=0)
  {
    a[j+1]=a[j];
    j--;
    a[j+1]=t;
  }
 }
 for(i=0; i<n; i++)
 {
  printf("%4d",a[i]);
 }
 printf("\n\n");
}
