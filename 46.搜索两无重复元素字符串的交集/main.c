#include "stdio.h"
#include "stdlib.h" 


/* 
搜索两无重复元素字符串的交集 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-04

**/
int main(int argc, char *argv[]) 
{
	char s1[50]="abcdefghikjklmopqruvwxyz";
	char s2[50]="zcdefgst";
	char s3[50];
	int i=0;
	int j,k=0;
	
	while(s1[i]!='\0')//遍历搜索s1字符串 
	{
		j=0;
		while(s2[j]!='\0')//匹配搜索s2字符串
		{
				if(s1[i]==s2[j])
			{
				s3[k] = s1[i];//相等的字符加入s3串 
				k++;
				break;
			}
			j++;		
		}
		i++; 
	}
	s3[k] = '\0';
	
	printf("交集为：%4s\n",s3); 
	
	getchar();
	return 0;
}
