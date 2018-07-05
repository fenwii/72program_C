#include "stdio.h"
#include "stdlib.h" 


/* 
求正整数因子 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-04

**/
void factor(int n)
{
	int i,k;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			k=i;
			break;
		}
	}
	printf("%d",k);
	
	if(n!=i)
	{
		printf("*");
		n = n/i;
		factor(n);
	}
}
int main(int argc, char *argv[]) 
{
	int n;
	printf("输入一个整数\n");
	scanf("%d",&n);
	printf("%4d=",n) ;
	
	factor(n);
	printf("\n");
	
	
	getchar(); 
	return 0;
}
