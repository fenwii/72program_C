#include "stdio.h"
#include "stdlib.h" 
#define max 100 

/* 
字符串中搜索指定单词出现的位置 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-04

*/

int count(char s1[],char s2[])
{
	int i,j;
	int n=0;
	int k=0;
	
	for(i=0; s1[i]!='\0';i++)
	{
		j = i;
		k = 0;
		while(s2[k]==s1[j])
		{
			j++;
			k++;
		}
		if((s2[k]=='\0'))
		{
			printf("position=%d\n",n++);
			
		}
		
		printf("count=%d\n",n);
	}
}
int main(int argc, char *argv[]) 
{
	int n;
	char s1[max];
	char s2[max];
	
	printf("输入字符串\n");
	
	gets(s1);
	
	printf("输入查找单词\n"); 
	
	gets(s2);
	
	count(s1,s2);
	
	
	getchar(); 
	
	return 0;
}
