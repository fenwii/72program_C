#include <stdio.h>
#include <stdlib.h>


main()
{
 int a[10],i,j,n=10;

 for(i=0; i<10; i++)
 {
  a[0]=1;
  for(j=i-1; j>0; j--)
  {
   a[j]=a[j]+a[j-1];
  }
  a[i]=1;
  printf("%*c",3*(10-i)+1);
     for(j=0; j<i+1; j++)
     {
      printf("%6d",a[j]);
     }
  printf("\n\n\n");
 }
printf("\n\n\n");
}
