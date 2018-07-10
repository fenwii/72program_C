#include "stdio.h"
#include "stdlib.h" 
#define m 100
#define n 5


/* 
冒泡算法改进 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-10 

**/

int main(int argc, char *argv[]) 
{
	typedef struct{
		int key;
		float inf;
	}element;	
	
	element list[n];
	int i,j;
	element extr;
	int r[5]={8,6,3,1,5};
	
	
	
	for(i=0;i<5;i++) //赋值结构体 
	{
		list[i].key = r[i];
	}
	

		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(list[j].key>list[j+1].key)//升序冒泡 
				{
					extr = list[j+1];
					list[j+1] = list[j];
					list[j] = extr;
					
				}
				
			} 
			
		
		}
		

	
	for(i=0;i<n;i++)
	{
		printf("%4d",list[i]);
	} 
	
	getchar();
	return 0;
}
