#include "stdio.h"
#include "stdlib.h" 
#include "string.h" 
#define max 100


/* 
有数字字符串转换为数字
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-04

**/
int main(int argc, char *argv[]) 
{
	int i,j;
	int k=0;
	int len=0;
	int b[max];
	char a[max];
	
	printf("请输入一个数字字符串\n");
	gets(a);
	
	len = strlen(a);
	
	for(j=0,i=0;i<len;i++)
	{
		b[j] = a[i]-48;
		j++;
	}
	len = len-1;
	k = b[0];
	
	for(j=1;j<=len;j++)
	{
		k = k*10+b[j] ;
	}
	printf("数字字符串转换为数字格式=%d\n\n",k);
	
	return 0;
}
