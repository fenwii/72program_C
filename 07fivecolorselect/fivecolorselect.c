#include <stdio.h>
#include <stdlib.h>

main()
{
 enum color{red,yellow,blue,white,black};
 enum color i,j,k;
 int n=0;
 
 for(i=red; i<=black; i++)
 {
    for(j=red; j<=black; j++)
    {
        if(i!=j)
        {
            for(k=red; k<=black; k++)
            {
                if((k!=j)&&(k!=i))
                {
                    n=n+1;
                }
            }
        }
         
    }

 }
printf("%d\n",n);
}
