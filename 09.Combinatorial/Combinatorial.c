#include "stdio.h"
#include "stdlib.h"

int func(int n,int m)
{
 if(n>m)
 {
  return 0;
 }
 else if(n>m-n)
 {
  return func(m-n,m);
 }
 else if(n==0)
 {
  return 1;
 }
 else if(n==1)
 {
  return m;
 }
 else
 {
  return func(n-1,m-1)+ func(n,m-1);
 }
}

main()
{
 int m,n;
 scanf("%d,%d",&n,&m);
 printf("%d\n",func(m,n));
} 
