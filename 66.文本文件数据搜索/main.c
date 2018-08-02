#include "stdio.h"
#include "stdlib.h" 


/* 
文本文件数据搜索
统计一文本中每个字母出现的次数（不区分大小写） 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-08-02

**/ 

int main(int argc, char *argv[]) 
{
	FILE *fp;
	char ch;
	char fname[20];
	int i=0;
	int count[26];
	
	printf("输入文件路径：如:d:\\test.dat\n");
	//gets(fname);
	
	if((fp=fopen("d:\\test.dat","r"))==NULL)//打开异常，退出 
	{
		exit(1);
	}
	
	for(i=0;i<26;i++)//初始化统计 
	{
		count[i]=0;
	} 
	
	while((ch=fgetc(fp))!=EOF)//读取搜索字符 
	{
		if(ch>='a' && ch<='z')
		{
			count[ch-97]=count[ch-97]+1;
		}
		if(ch>='A' && ch<='Z')
		{
			count[ch-65]=count[ch-65]+1;
		}
	}

	
	for(i=0;i<26;i++)
	{
		printf("%c,%c,字母出现的总次数%d\n",i+65,i+97,count[i]);
	}
	
	fclose(fp);
	
	
	getchar(); 
	return 0;
}
