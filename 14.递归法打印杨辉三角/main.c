#include "stdio.h"
#include "stdlib.h"

/* 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-06-26 

*/

void yh_t(int);
int yh(int, int);

int main(int argc, char *argv[]) 
{
	int n;
	
	scanf("%d", &n);
	
	yh_t(n);
	printf("\n");
	
	
	getchar();
	return 0;
}

void yh_t(int n)
{
	int i, j;
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%4d", yh(i,j));
		}
		printf("\n");
	}
	
	
}

int yh(int m, int n)
{
	if(n==1|| n==m)
	{
		return 1;
	} 
	else
	{
	 	return yh(m-1, n-1) + yh(m-1, n);
	}
	
	
}
