#include "stdio.h"
#include "stdlib.h" 
#include "math.h"


/* 
最小公倍数改进算法 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-04

**/

int gcd(int m,int n)
{
	int r;
	
	while((r=abs(m-n))&&(r!=0))
	{
		m = n;
		n = r;
	}
	
	return n;
}

int sct(int m, int n)
{
	return (m*n/gcd(m,n));
}

int main(int argc, char *argv[]) 
{
	int m=0;
	int n=0;
	int k=0;
	
	while(k==0 || m<=0 || n<=0)
	{
		k = 1;
		printf("输入两个整数，以空格隔开\n"); 
		scanf("%d%d",&m,&n);
	}
	
	printf("m=%d,n=%d,gcd=%d\n",m,n,gcd(m,n));
	printf("m=%d,n=%d,sct=%d\n",m,n,sct(m,n));
	
	getchar(); 
	return 0;
}
