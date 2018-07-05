#include "stdio.h"
#include "stdlib.h"

main()
{
 int j,k,jmax,temp,n=10;
 int a[10]={ 9,3,0,1,5,7,4,6,2,8};
 
 jmax = n-1;
 do
 {
 	 k=0;
	 for(j=0; j<jmax; j++)
	 {
	  if(a[j]<a[j+1])
	  {
	   temp=a[j];
	   a[j]=a[j+1];
	   a[j+1]=temp;
	   k=j;
	  }
	 }
	 jmax=k;
 }while(jmax>0);
 for(j=0; j<n; j++)
 {
  printf("%4d",a[j]);
 }
 printf("\n\n\n");
}
