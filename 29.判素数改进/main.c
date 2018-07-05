#include "stdio.h"
#include "stdlib.h" 
#include "math.h" 

/* 
插入字符串
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-06-30 

**/

int main(int argc, char *argv[]) 
{

	int i,m,k,flag=1;
	
	while(flag)
	{
		printf("请输入一个大于等于2的整数：");
		scanf("%d",&m);
		if(m>=2)
		{
			flag = 0;
		}
	}

	k=sqrt((double)m);

	for(i=2;i<=k;i++)
	{
		if(m%i==0)
		{
	    	break;	
		}
	}
	
	if(i>k)
		{
			printf("%d 是素数。\n",m);	
		}
		
		else
		{
			printf("%d 不是素数。\n",m);
		}
			
	
	return 0;
}
