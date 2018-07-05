#include "stdio.h"
#include "stdlib.h" 

/* 
求多项式阶乘的和 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-06-28 

*/
int main(int argc, char *argv[]) 
{
	int i = 1;
	float e = 1.0;
	float t = 1.0;
	
	do
	{
		t = t/i;
		i++;
		
		e= e+t;
		
	}while(t>1e-5);
	
	printf("%f\n",e);
	
	
	getchar();
	return 0;
}
