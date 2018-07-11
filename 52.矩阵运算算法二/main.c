#include "stdio.h"
#include "stdlib.h" 


/* 
矩阵运算算法二 
1 1 1 1 1
2 1 1 1 1
3 2 1 1 1
4 3 2 1 1
5 4 3 2 1
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-11

**/
int main(int argc, char *argv[]) 
{
	int i,j,n;
	int a[100][100];
	
	printf("请输入一个整数\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j>=i)//j>i时，赋值1 
			{
				a[i][j] = 1;
				
			}
			else// 其他，赋值i-j+1
			{
				a[i][j] = i-j+1;
			}
		}
	}
	
	for(i=0;i<n;i++)//格式化输出 
	{
		if(i%n)
		{
			printf("\n");
		}
		for(j=0;j<n;j++)
		{
			printf("%4d",a[i][j]);
		}
	}
	printf("\n\n");
	
	getchar(); 
	return 0;
}
