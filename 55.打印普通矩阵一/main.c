#include "stdio.h"
#include "stdlib.h" 


/* 
打印普通矩阵算法二 
16 15 14 13 12 11 28
17 4  3  2  10 27 29
18 5  1  9  26 43 30
19 6  8  25 42 44 31
20 7  24 41 49 45 32
21 23 40 48 47 46 33
22 39 38 37 36 35 34
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-12

**/
int main(int argc, char *argv[]) 
{
	int i,j;
	int m=0;
	int k,n;
	int a[20][20];
	
	while(1)
	{
		printf("请输入一个整数\n");
		scanf("%d",&n);
		if(n>=1 && n<=30)
		{
			break;
		}
	}
	
	if(n%2)
	{
		k=(n*n+1)/2;
		j=n/2;
		i=n/2;
	}
	else
	{
		k=n*n/2;
		i=n/2-1;
		j=n/2;
	}
	do
	{
		for(;i>=2*m;i--,j++)
		{
			a[i][j] = k++;
		}
		i += 2;
		j--;
		
		for(;i<n-m;i++)
		{
			a[i][j] = k++;
		}
		i--;
		j--;
		
		for(;j>=2*m+1;j--)
		{
			a[i][j] = k++;
		}
		j += 2;
		i--;
		m++;	
	}while(m<=n/2 && k<=n*n);

	for(j=n-1;j>0;j--)
	{
		for(i=n-j-1;i<n;i++)
		{
			a[n-i-1][n-j-1]=n*n+1-a[i][j];
		}	
	} 
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n\n");
	}
	
	getchar();
	return 0;
}
