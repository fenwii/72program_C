#include "stdio.h"
#include "stdlib.h" 


/* 
打印螺旋矩阵算法改进 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-11


功能：打印螺旋矩阵
参数说明：matrix ：螺旋矩阵         (x，y) ：第一个元素的坐标
          start ：第一个元素的值     
          n ：矩阵的大小
**/
void setMatrix(int **matrix, int x, int y, int start, int n) {
       int i, j;
       if (n <= 0)
              return;
       if (n == 1) {
              matrix[x][y] = start;
              return;
       }
       for (i = x; i < x + n-1; i++)//上部 //
       {
       		matrix[y][i] = start++;
	   }
              
       for (j = y; j < y + n-1; j++)//右边
       {
       		matrix[j][x+n-1] = start++;
	   }
              
       for (i = x+n-1; i > x; i--)//底部 
       {
       		matrix[y+n-1][i] = start++;
	   }
              
       for (j = y+n-1; j > y; j--) //左边 
       {
       		matrix[j][x] = start++;
	   }
              
       setMatrix(matrix, x+1, y+1, start, n-2); // 递归 
}
 
int main(int argc, char *argv[]) 
 {
    int i, j;
    int n;
    int **matrix; //螺旋矩阵（二维数组）
      
    printf("请输入一个整数\n");  
    scanf("%d", &n);
    
    matrix = (int **)malloc(n * sizeof(int *)); //为矩阵分配空间
    for (i = 0; i<n; i++)
    {
    	matrix[i] = (int *)malloc(n * sizeof(int));
	}
              
      
		setMatrix(matrix, 0, 0, 1, n);
 
       
       for(i = 0; i < n; i++) //打印螺旋矩阵
	   {
              for (j = 0; j < n; j++)
              {
              	printf("%4d", matrix[i][j]);
			  }
                     
       		printf("\n");
       }
}
