#include "stdio.h"
#include "stdlib.h" 
#include "string.h" 

/* 
删除指定长度字符串
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-07-02 

**/

void deleteString(char* array,char*result,int begin,int len)//begin 开始删除的位置，len，删除的长度。
{
 int i=0,j=0;
 while(array[i]!='\0')
 {
  if(i<(begin-1)||i>=(begin+len-1))
   result[j++]=array[i++];
  else
   i++;
 }
 result[j]='\0';
}
int main(void)
{
 char s1[100];
 char s2[100];
 int begin,len; 
 printf("请输入一个字符串\n");
 gets(s1);
 
 printf("请输入删除开始下标begin和长度len，以空格隔开\n");
 scanf("%d%d",&begin,&len);
 deleteString(s1,s2,begin,len);
 
 puts(s2);
 return 0;
}
