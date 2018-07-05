#include "stdio.h"
#include "stdlib.h"

/* 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-06-26 

*/
int main(int argc, char *argv[]) 
{
	int i, n;
	int a[17];
	int count = 0;
	int out = 0;
	
	scanf("%d",&n);
	

	for(i=1; i<=n; i++)
	{
		a[i-1] = i;
	}
	

	
	i=0;
	
	while(out<n-1)
	{
		if(a[i])
		{
			count++;
		}
		
		if(count>4)
		{
			count = 0;
			a[i] = 0;
			out++;	
		}
		
		i++;
		 
		if(i==n)
		{
			i = 0;
		}
	}
	
	for(i=0; i<n; i++)
	{
		if(a[i])
		{
			printf("%20d\n",a[i]);
		}
	}
	
	getchar();
	return 0;
}
