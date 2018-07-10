#include "stdio.h"
#include "stdlib.h" 


/* 
特殊数字矩阵 (上下左右对称） 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-10

**/
int main(int argc, char *argv[]) 
{
	int i,j,k,n,space;
	int s=40;
	
	printf("请输入一个整数\n"); 
	scanf("%d",&n);
	
	for(j=1;j<=n;j++)
	{
		space = s-3*j;
		printf("%*c",space);//打印空白 
		for(k=1;k<=j;k++)//打印左边数字 
		{
			printf("%3d",k);
		}
		for(k=j-1;k>=1;k--)//打印右边数字 
		{
			printf("%3d",k);
		}
		printf("\n");
		
	}
	
	getchar();
	return 0;
}
