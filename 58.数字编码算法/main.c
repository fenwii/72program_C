#include "stdio.h"
#include "stdlib.h" 
#define max 8
#define m 263 

/* 
数字编码算法 
由2n个0和1组成一个环，环上相邻n个数字组成一个二进制数，
共可组成2n个二进制数，且恰好是0-2n-1,给出一组数字 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-13

**/

short int s[m+1], a[m+1];
int n,i,pwn;

char d(int k, int t)
{
	char b;
	if(!k)
	{
		return 1;
	}
	else
	{
		t=2;
		if(s[t])
		{
			s[t] = 0;
			a[k] = 0;
	
		
			b = d(k-1,t);
			if(!b)
			{
				s[t]=1;
			}
		}
		else
		{
			b = 0;
		}
	}
	if(!b)
	{
		t+=pwn;
		if(s[t])
		{
			s[t]=0;
			a[k]=1;
			b=d(k-1,t);
			if(!b)
			{
				s[t]=1;
			}
			else
			{
				b=0;
			}
		}
	}
	return b;
}
int main(int argc, char *argv[]) 
{
	printf("请输入一个整数:\n");
	scanf("%d",&n);
	
	pwn=1;
	
	for(i=1;i<=n;i++)
	{
		pwn*=2;
	}
	
	for(i=1;i<=pwn+n-1;i++)
	{
		a[i]=0;
	}
	
	for(i=1;i<pwn;i++)
	{
		s[i]=1;
	}
	s[0] = 0;
	
	if(d(pwn-1,0))
	{
		for(i=1;i<=pwn;i++)
		{
			printf("%4d",a[i]);
		}
	}
	
	getchar();
	return 0;
}
