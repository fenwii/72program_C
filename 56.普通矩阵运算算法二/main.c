#include "stdio.h"
#include "stdlib.h" 
#define max 100

/* 
普通矩阵运算算法二
1 1 1 1 1
1 2 2 2 2
1 2 3 3 3
1 2 3 4 4
1 2 3 4 5

 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-12

**/

int main(int argc, char *argv[]) 
{
	int i,j,n;
	int a[max][max];
	
	printf("请输入额一个整数\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>=j)//观察下标i大于等于j的值赋值j+1; 
			{
				a[i][j] = j+1;
				
			}
			else////观察下标i小于j的值赋值i+1; 
			{
				a[i][j] = i+1;
			}
		
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)//循环5个输出 
		{
			printf("%4d",a[i][j]);
			
		}
		if(j%n==0)//每五个输出一个换行 
		{	
			printf("\n\n");	
			
		}
	}
	
	getchar(); 
	return 0;
}
