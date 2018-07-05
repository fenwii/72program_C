#include "stdio.h"
#include "stdlib.h" 


/* 
拼零钱算法 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-04

**/

int main(int argc, char *argv[]) 
{
	int i,j,k,n,m;
	
	n = 100;
	k = 0;
	
	for(i-0;i<=n/5;i++)
	{
		for(j=0;j<=n/2;j++)
		{
			m = 100-i*5-j*2;
			if(m<0)
			{
				continue;
			}
		}
		
		printf("5cent=%d,2cent=%d,1cent=%d\n",i,j,m);
		k++;
	}
	printf("拼凑次数=%d",k);
	
	getchar();
	return 0;
}
