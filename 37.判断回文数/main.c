#include "stdio.h"
#include "stdlib.h" 
#include "string.h" 


/* 
判断回文数 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-04

**/
int main(int argc, char *argv[]) 
{
	int i=0;
	int j,n;
	int k=0;
	int a[20];

	printf("请输入一个整数\n");
	
	scanf("%d",&n);
	while(n%10)
	{
		a[i] = n%10;
		n /= 10;
		k++;
		i++;
	}
	
	i = 0;
	j = k-1;
	
	while((i<=k/2)&&(j>=k/2))
	{
		if(a[i]==a[j])
		{
			i++;
			j--;
			if(i==j ||i+1==j)
			{
				printf("是回文数");
			}
		
		
		}
		else
		{
			printf("不是回文数");
			break;
		} 
	}
	
	getchar();
	return 0;
}
