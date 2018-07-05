#include "stdio.h"
#include "stdlib.h" 


/* 
十进制转换为二至十六任意进制 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-04

**/
int main(int argc, char *argv[]) 
{
	char b[17]={"0123456789ABCDEF"};
	
	int xs[64];
	int mm;
	int i=0;
	int base;//进制 
	long ss;
	
	printf("请输入十进制数\n");
	scanf("%ld",&ss);
	
    printf("请输入指定制位（2-16）位\n");
	scanf("%d",&base);

	do
	{
		xs[i++] = ss%base;
		ss = ss/base;
	}while(ss!=0);
	
	for(i=i-1; i>=0; --i)
	{
		mm = xs[i];
		printf("%c",b[mm]);
	}
	getchar(); 
	return 0;
}
