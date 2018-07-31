#include "stdio.h"
#include "stdlib.h" 


/* 
长整型应用 
4个字符'a','b','c','d'构成一个长整型数，4个字节由长整型保存 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-31

**/ 

void pp(char k[])
{
	union aa{
		char a[4];
		unsigned long int b;
	}m;
	
	m.a[0]=k[0];
	m.a[1]=k[1];
	m.a[2]=k[2];
	m.a[3]=k[3];
	
	printf("%2d\n",m.b);
}
int main(int argc, char *argv[]) 
{
	char w[4]="abcd";
	pp(w);
	
	getchar(); 
	return 0;
}
