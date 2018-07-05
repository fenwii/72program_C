#include "stdio.h"
#include "stdlib.h" 
#include "string.h" 


/* 
字符串排序并去掉重复的字符
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-04

**/
int main(int argc, char *argv[]) 
{
	char str[100]="pqrsdmnhabcijklotxyzuvwabcefg";

	char *q,*p,*r;
	char c;
	
	for(p=str;*p!='\0'; p++)//用指针p遍历str 
	{
		r = p;
		for(q=p+1;*q;q++)
		{
			if(*r>*q)//移动q,大于就交换 
			{
				c = *r;
				*r = *q;
				*q = c;
			}
			if(r!=p)//移动p,不等于就交换 
			{
				c = *r,
				*r = *p;
				*p = c;
			}
		}
	}
	
	for(p=str; *p!='\0'; p++)
	{
		q = p+1;
		while(*q==*p)
		{
			strcpy(p,q);//把q拷贝到 p
		}	
	} 
	
	printf("排序去重后的字符串:%4s\n",str);
	return 0;
}
