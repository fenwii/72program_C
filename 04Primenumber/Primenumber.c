#include <stdio.h>
#include <stdlib.h>

main()
{
 int i,j;
 for(i=2;i<99; i++)
 {
  for(j=2; j<i; j++)
  {
   if(i%j==0)
   {
    break;
   }
   if(j==i-1)
   {
    printf("%4d",i);
   }
  }
 }
}
