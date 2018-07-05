#include "stdio.h"
#include "stdlib.h" 

/* 
用递归将数组逆序
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-06-27 

*/

void invert(int a[], int n)
{
	static int i=0;
	int c;
	
	if(n==0)
	{
		return;
	}
	else
	{
		c = a[n-1];
		i++;
		invert(a,n-1);
		a[--i] = c;
	}
	
}

int main(int argc, char *argv[]) 
{
	int n=10;
	int i;
	int a[10]={9,3,5,1,8,4,7,2,6,0};
	
	invert(a,n); 
	
	for(i=0; i<n; i++)
	{
		printf("%4d",a[i]);
	}
	printf("\n\n");
	
	
	getchar(); 
	return 0;
}
