#include "stdio.h"
#include "stdlib.h" 


/* 
有一无符号长整型，由前后两字节构成，分别输出两全字节 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-04

**/

void pp(unsigned long int k) 
{
	union aa{
		unsigned int a[2];
		unsigned long int b;
	}c,*p;
	
	p = &c;
	c.b = k;
	
	printf("地位数字节=%0x,高位数字节=%0x",p->a[1],p->a[0]);
}
int main(int argc, char *argv[]) 
{
	unsigned long int w;
	
	w = 0x12345678;
	
	pp(w);
	
	getchar();
	
	return 0;
}
