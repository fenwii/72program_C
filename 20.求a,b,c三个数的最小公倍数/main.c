#include "stdio.h"
#include "stdlib.h" 

/* 
求最小公倍数
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-06-27 

*/



int main(int argc, char *argv[]) 
{
    int x,y,z;
    printf("输入三个整数，数之间用空格隔开：\n") 
    scanf("%d%d%d", &x, &y, &z);
    printf("最小公倍数=%d\n", lcm(lcm(x, y), z))
	
	getchar();
	
	return 0;
}

//最大公约数
int gcd( int x , int y){  
    int max,min,temp;  
    max = x > y ? x : y ;  
    min = x < y ? x : y ;  
    while( max % min ){  
  
        temp = max % min;  
        max = min;  
        min = temp;  
    }  
    return min;  
}  
//最小公倍数  
int lcm( int x , int y ){  
    return x*y/gcd(x,y);  
} 
/**

PS:头条编辑器暂不支持代码格式，导致缩进格式丢失，需工程源码请私信。若发现错误，欢迎指正。

**/
