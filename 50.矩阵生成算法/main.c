#include "stdio.h"
#include "stdlib.h" 


/* 
环形矩阵生成算法
1 2 3 ... n
n 1 2 ... n-1
n-1 n 1 ... n-2
  .
  .
2 3 4 ... 1
 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-10

**/
int main(int argc, char *argv[]) 
{
	int i,n,j;
	int a[100][100];
	
	printf("请输入一个整数\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=j>=i?j-i+1:n+j-i+1;
		}
	}
	for(i=0;i<n;i++)
	{
		if(i%n)
		{
			printf("\n");
		}
		for(j=0; j<n; j++)
		{
			printf("%4d",a[i][j]);
		}
	}
	printf("\n\n");
	
	getchar();
	return 0;
}
