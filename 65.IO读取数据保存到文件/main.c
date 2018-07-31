#include "stdio.h"
#include "stdlib.h" 
#define null 0

/* 
IO读取数据保存到文件
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-31

**/ 

int main(int argc, char *argv[])
{
	FILE *fp; 
	char str[100];
	int i;
	
	if((fp=fopen("d:\\test.dat","w"))==null)
	{
		exit(1);
	}
	
	printf("请输入一个字符串\n");
	
	gets(str);
	
	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]= str[i]-32;
			putc(str[i],fp);
			i++;
		}
	}
	fclose(fp);
	
	getchar();
	return 0;
}
