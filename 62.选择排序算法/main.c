#include "stdio.h"
#include "stdlib.h" 


/* 
选择排序算法 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-16

**/ 
int main(int argc, char *argv[]) 
{
	int i,j,k,t;
	int n=10;
	int a[10]={9,4,2,1,5,6,8,3,7,0};
	
	for(i=0; i<n-1;i++)
	{
		k=i; 
		for(j=i+1;j<n;j++)//从第2个元素开始遇到比它大的就交换 
		{
			if(a[j]<a[k])//小于就交换下标 
			{
				k=j;
			}
			if(i!=k)//不相等，则交换值 
			{
				t=a[i];
				a[i]=a[k];
				a[k]=t;
			}
		}
	}
	
	for(i=0;i<n;i++)//打印排序后的值 
	{
		printf("%4d",a[i]);
	} 
		
	getchar(); 
	return 0;
}
