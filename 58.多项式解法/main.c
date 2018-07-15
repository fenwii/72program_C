#include "stdio.h"
#include "stdlib.h" 


/* 
f(x)=a0x^n+a1x^n-1+a2x^n-2+...+an;

 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-15

**/ 
int main(int argc, char *argv[]) 
{
	int x,n,i,a[100],f=0;
	
	do
	{
		printf("请输入两个整数，以空格隔开：\n");
		scanf("%d%d",&x,&n);
	}while(n<=0);
	
	printf("请输入%d个整数，以空格隔开：\n",n);
	for(i=0; i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	f=a[0];
	a[0]=0;
	i=1;
	
	do
	{
		f=f*x+a[i];
		i++;
		
	}while(i<=n);
	
	printf("%8d\n",f);
	
	getchar(); 
	return 0;
}
