#include "stdio.h"
#include "stdlib.h" 
 

/* 
判定三角形 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-06-30 

**/

int judge(int *);

int main(int argc, char *argv[]) 
{
	int i,s[3]={3,4,5};
	
	switch(judge(s))
	{
		case 0:
		 printf("输入错误");
		 break;
		
		case 1:
			printf("是三角形 \n") ; 
			break; 
		case 2:
			printf("请输入正确数据!\n");
			break;
	}
	return 0;
}

int judge(int *s)
{
	int i;
	
	for(i=0;i<3;i++)
	{
		if(s[i]<=0||s[i%3]>s[(i+1)%3]+s[(i+2)%3])
		{
			return 0;
		}
		
		if(s[i%3]*s[i%3]+s[(i+1)%3]*s[(i+1)%3]==s[(i+2)%3]*s[(i+2)%3])
		{
			return 1;
		}
		else
		{
			return 2;
		}
		
	}	
}
