#include "stdio.h"
#include "stdlib.h" 


/* 
计算数字的位数
有一不多于4位的整数，求出它是几位数，分别输出每一位数和按逆序输出各位数 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-31

**/ 


int main(int argc, char *argv[]) 
{
	int a,b[4];
	int i=0;
	int t=0;
	
	do
	{
		printf("请输入一个整数\n");
		scanf("%d",&a);
		
		if(a<0&a>9999)
		{
			printf("数据输入错误");	
		} 
		
		 
		
	}while(a<0&a>9999);
	
	
	while(a)
	{
		b[i++] = a%10;
		a = a/10;
		t++;
	}
	printf("数字的长度是%d\n",t);
	
	for(;i>0;i--)
	{
		printf("%2d",b[i-1]);
	}
	printf("\n");
	
	for(;i<t;i++)
	{
		if(b[i]==0)
		{
			i++;
		}
		else
		{
			printf("%2d",b[i]);
		}
	}
	printf("\n");
	
	
	getchar(); 
	return 0;
}
