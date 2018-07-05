#include "stdio.h"
#include "stdlib.h" 
#include "string.h" 
#define max 100

/* 
插入字符串 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-06-30 

*/

char insterstr(char *s1, int n,char *s2)
{
	int i,j,k;
	i=strlen(s1);
	j=strlen(s2);
	
	if(n<0|| n>i||i+j>max)
	{
		return 0;	
	}
	else
	{
		for(k=i;k>=n;k--)
		{
			s1[k+j] = s1[k];
			for(k=0;k<j;k++)
			{
				s1[k+n] = s2[k];
				s1[i+j] = '\0';
			}
		}
	}
}

int main(int argc, char *argv[]) 
{
	char s1[max],s2[max]; int n;
	printf("输入S1字符串\n");
	gets(s1);
	printf("输入S2字符串\n");
	gets(s2);
	
	printf("输入一个整数\n");
	scanf("%d",&n);
	insterstr(s1,n,s2);
	puts(s1);
	return 0;
}
