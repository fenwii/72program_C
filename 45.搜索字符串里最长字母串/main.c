#include "stdio.h"
#include "stdlib.h" 
#include "string.h" 


/* 
搜索字符串里最长字母串算法 

 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-04

**/
int alph(char c)//判断字母字符 
{
	if(c<='z' && c>='a' || c<='Z'&& c>='A') 
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int main(int argc, char *argv[]) 
{
	char str[200];
	int len=0;
	int i,p;
	int length = 0;
	int flag =1; //计数开关 
	
	printf("请输入字符串\n");
	gets(str);//获取字符串 
	
	for(i=0; str[i]!='\0'; i++)//从头到尾扫描 
	{
		if(alph(str[i]))
		{
			if(flag)
			{
				p = i;//记录字母位置 
				flag = 0;//关闭计数开关 
				len++;	
			}
			else
			{
				len++;
			}
		}
		else
		{
			if(len>length)//记录字母长度 
			{
				length = len;
			}
			len = 0;
		}
	}
	printf("字母串最长长度为：%d,位置在第%d个\n",length,p);
	
	getchar();
	return 0;
}
