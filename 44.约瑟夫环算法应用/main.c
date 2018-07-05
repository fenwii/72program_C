#include "stdio.h"
#include "stdlib.h" 


/* 
约瑟夫环应用：17人围成一圈，从1-5报数，求最后一个人的编号 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-04

**/
int main(int argc, char *argv[]) 
{
	int i, test,head,p[17];
	
	for(i=0;i<16;i++)
	{
		p[i] = i+1; //初始化p[17],并赋值 
	}	
	p[16] = 0;
	
	test = 0;
	
	while(test!=p[test])
	{
		for(i=1; i<5;i++) //循环 1-5报数 
		{
			head = test;
			test = p[test];
		}
		p[head] = p[test];//将第5个重新设置为第一个 
		test = p[head];
		
	}

	printf("最后一人编号是：%d 号\n",p[test]);
	
	getchar();
	return 0;
}
