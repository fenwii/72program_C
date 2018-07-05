#include <stdio.h>
#include <stdlib.h>
#include "string.h"

char s2[100];
char *substr(char*s1, int n1, int n2)
{
int i, k;

i = strlen(s1);

if(n1<0 || n2<0 || n1>i || n1+n2>i)
{
 return 0;
}else
    {
        for(k=0; k<n2; k++)
        {
         s2[k] = s1[n1+k];
        }
        s2[n2] = '\0';
          
        for(k=0; k<i-n1-n2; k++)
       {
        s1[n1+k]=s1[n1+n2+k];
       }
        s1[i-n2]='\0';
        return 1;
    }
     
    
}

main()
{
char s1[100];
int n1,n2;

gets(s1);
scanf("%d,%d",&n1,&n2);
substr(s1,n1,n2);
puts(s1);
puts(s2);
printf("\n\n");
}

