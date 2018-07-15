#include "stdio.h"
#include "stdlib.h" 
#include "string.h" 


/* 
文件使用 

 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-11

**/

struct em{
	int no;
	char name[8];
	int age;
}em[10]; 
FILE *fp;

int main(int argc, char *argv[]) 
{	
	int i,n;
	
	printf("请输入一个整数：\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("输入编号no\n");
		scanf("%d",&em[i].no);
		
		printf("输入名字：\n");
		scanf("%s",&em[i].name);
		
		printf("输入年龄age\n");
		scanf("%d",&em[i].age);
	}
	
	if((fp=fopen("D:\\employer.txt","w"))==NULL)
	{
		exit(1);
	}
	fwrite(em,sizeof(em),1,fp);
	fclose(fp);
	
	if((fp=fopen("D:\\employer.txt","r"))==NULL)
	{
	 	exit(1); 
	}
	
	for(i=0;i<n;i++)
	{
		if(em[i].age>=50)
		{
			printf("%2d%2s%2d\n",em[i].no,em[i].name,em[i].age);
		}
	}
	
	fclose(fp);
	getchar();
	return 0;
}
