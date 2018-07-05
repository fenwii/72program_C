#include "stdio.h" 
#include "stdlib.h"

/* 
求集合所有子集

@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-06-26 

*/

int main(int argc,char **argv)
{
	int n,i,j;
	int start,end; //集合首尾标记 

	printf("请输入集合元素个数n的值（正整数）：");
	scanf("%d",&n); 

	printf("{ }\n");//输出空集

	for(end=1;end<=n;end++)
	{
		printf("{%d }\n",end); 
		
		for(start=end;start>0;start--)
		{ 
			for(j=1;j<start;j++)
			{
			printf("{");
			printf(" %d ",j);
				for(i=start;i<end;i++)
				{
					printf(" %d ",i);
				} 
				printf("%d}\n",end);
			}
		}
	}
}
