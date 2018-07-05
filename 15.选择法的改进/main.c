#include "stdio.h"
#include "stdlib.h"

/* 
@ function 选择法的改进 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-06-26 

*/
int main(int argc, char *argv[]) 
{
	int i=0;
	int j, m, t;
	int k=0;
	int *loc;
	int n=10;
	int a[10]={9,8,4,2,5,6,3,7,1,0};
	
	m = n-1;
	
	loc=(int*)malloc(2*n*sizeof(int));
	
	while(i<n-1)
	{
		for(j=m; j>=i; j--)
		{
			if(a[i]>a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
				k++;
				*(loc+k) = j;
			}
		}
		do
		{
			i++;
			if(k==0)
			{
				m = n-1;
			}
			else
			{
				m = *(loc+k);
				k--;
			}
		}while(0);
		
		if(m!=n-1)
		{
			t = a[i];
			a[i] = a[m];
			a[m] = t;
		}
	}
	
	for(i=0; i<n; i++)
	{
		printf("%4d",a[i]);
	}
	
	printf("\n");
	
	getchar();
	return 0;
}
