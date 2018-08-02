#include "stdio.h"
#include "stdlib.h" 


/* 
使用指针交换值 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-08-02

**/ 

void swap(int *x,int *y)//指针值交换 
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(int argc, char *argv[]) 
{
	int a,b;
	
	printf("输入连个整数，以空格隔开\n") ;
	scanf("%d%d",&a,&b);
	printf("交换前a=%d,b=%d\n",a,b);
	swap(&a,&b);
	
	printf("交换后a=%d,b=%d\n",a,b); 
	
	getchar();
	return 0;
}
