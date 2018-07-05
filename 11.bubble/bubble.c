#include <stdio.h>
#include <stdlib.h>

main()
{
int i,j,n=10,t;
int a[10]={2,3,9,5,1,4,6,7,0,8};

for(i=1; i<n-1; i++)
{
    for(j=0; j<n-i; j++)
    {
        if(a[j]<a[j+1])
        {
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
        }
        
    }

}

for(i=0; i<n; i++)
{
    printf("%4d\n",a[i]);
}
}

