#include "stdio.h"
#include "stdlib.h" 


/* 
计算s=11+22+33+...+nn; 

 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-15

**/ 
int main(int argc, char *argv[]) 
{
	int i,j,n;
	long sum,term;
	
	printf("请输入一个整数：\n");
	scanf("%d",&n);
	
	for(sum=0,i=1;i<=n;++i)
	{
		term=1;
		j=1;
		do
		{
			term=i;//计算个位 
			
			
		}while(++j<=i);
		term +=10*i;//计算十位 
		
		sum +=term;
	} 
	
	printf("表达式求和得：%d\n",sum);
	
	getchar();
	return 0;
}
