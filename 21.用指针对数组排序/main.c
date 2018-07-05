#include "stdio.h"
#include "stdlib.h" 

/* 
使用指针对数组排序 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-06-28

*/

void sort (int *p, int n)
{
	int i,j,k,t;
	
	for (i=0; i<n; i++)
	{
		k = i;
		for(j=i+1; j<n; j++)
		{
			if(*(p+j)>*(p+k))
			{
				k = j;
			}
			
			if(k!=i)
			{
				t = *(p+i);
				*(p+i) = *(p+k);
				*(p+k) = t;
			}
		}
	}
}
int main(int argc, char *argv[]) 
{
	int i,n=10;
	int *p;
	int a[10]={1,9,7,4,2,3,6,8,0,5};
	
	p = a;
	sort(p,n);
	for (i=0; i<n; i++)
	{
		printf("%4d",a[i]);
	}
	
	getchar(); 
	return 0;
}
/**

PS:编辑器暂不支持代码格式，导致缩进格式丢失，需工程源码请私信。若发现错误，欢迎指正。

**/
