#include "stdio.h"
#include "stdlib.h" 


/* 
一级，二级指针类型运用 
int *p ：一级指针，表示p所指向的地址里面存放的是一个int类型的值 
int **p ：二级指针，表示p所指向的地址里面存放的是一个指向int类型的指针（即p指向的地址里面存放的是一个指向int的一级指针） 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-08-02

**/ 
void point(int **);//函数声明 

int main(int argc, char *argv[]) 
{
	int line[100];
	int i;
	int *p=line;
	
	
	for(i=0;i<100;i++)
	{
	   *p=i;
		point(&p);
	}
	
	for(i=0;i<100;i++)//输出 
	{
		printf("%4d",line[i]);
		printf("\n");
	}
	
	getchar(); 
	return 0;
}

void point(int **p)
{
	(**p)++; //二级指针值加1 
	(*p)++;  //一级指针地址加单位 
} 
