#include "stdio.h"
#include "stdlib.h" 

/* 
百马百货（大马3担，中马2担，小马1担） 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-06-28 

*/

int main(int argc, char *argv[]) 
{
	int i,j,k,c=0;
	int r=100;
	int n=100;
	
	for(i=0; i<=n/3; i++)
	{
		for(j=0;j<(100-i)/2; j++)
		{
			k = 100-i-j;
			r = 100-i*3-j*2-r/2;
			if(r==0 && k%2==0)
			{
				printf("large=%d\tmiddle=%d\tsmall-%d\n",i,j,k);
				c++;
			}
		}
	}
	
	printf("c=%d\n\n\n\n",c);
	
	getchar(); 
	return 0;
}
