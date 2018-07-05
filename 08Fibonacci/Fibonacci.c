#include  "stdio.h"
#include "stdlib.h"

long int f();

main()
{
 int i;
 for(i=1; i<=20; i++)
 {
  printf("f(%d)=%ld\n",i,f());
 }
 
 getchar();
}

 long int f()
 {
  static long int f0=-1,f1=1,f2;
  f2=f0+f1;
  f0=f1;
  f1=f2;
  return f2;
 }
