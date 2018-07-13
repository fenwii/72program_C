#include "stdio.h"
#include "stdlib.h" 


/* 
找出1--n中任意r个数的所有组合 

 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-13

**/

int a[100];
/**
m：字符串长度
n：提取长度 


**/
void comb(int m, int k)
{
	int i,j;
	
	for(i=m; i>=k;i--)
	{
		a[k] = i;//从末尾开始向前扫描提取 
		if(k>1)//大于1就向前移动 
		{
			comb(i-1,k-1);
		}
		else
		{
			for(j=a[0]; j>0;j--)//从首部扫描 
			{
				printf("%4d",a[j]);
				
			}
			
		}
		printf("\n");
	}
}
int main(int argc, char *argv[]) 
{
	int m,n;
	
	printf("请输入两个整数，以空格隔开：\n");
	scanf("%d%d",&m ,&n);
	
	a[0]=n;
	comb(m,n); 
	
	return 0;
}
