#include "stdio.h"
#include "stdlib.h"
#define max 1000

/* 
用数组求100！ 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-06-26

*/
int main(int argc, char *argv[]) 
{
	int i,j,k,kc;
	int n=100;
	int m[max];
	
	for(i=0; i<max; i++)
	{
		m[i] = 0;
		m[0] = 1; 
 	}
	
	for(i=2; i<=n; i++)
	{
		kc = 0;
		for(j=0; j<max; j++)
		{
			k = m[j]*i + kc;
			kc = k/10;
			m[j] = k%10;
		}
	
	}
	
	if(kc>0)
	{
		printf("overflow!");
	}
	else
	{
		i = max-1;
		while(!m[i])
		{
			i--;
		}
		while(i>=0)
		{
			printf("%d",m[i]);
			i--;
		}
		printf("\n\n\n");
	}
	
	getchar();
	return 0;
}

/**

PS:头条编辑器暂不支持代码格式，导致缩进格式丢失，如需工程源码请私信。

给您带来的不便，请见谅，如发现错误，还请指正，谢谢。

**/
