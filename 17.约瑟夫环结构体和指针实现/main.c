#include "stdio.h"
#include "stdlib.h"
#define null 0

/* 
约瑟夫环结构体和指针实现,丢手绢问题 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-06-26 

*/
int main(int argc, char *argv[]) 
{
	int s,n,m;
	int i=0;
	struct node{
		int data;
		struct node *next;
	}*p,*t,*head;
	
	head = null;
	
	scanf("%d,%d",&n, &s);
	
	while(i++<n)
	{
		p = (struct node*)malloc(sizeof(struct node));
		p->data = i;
		
		if(head==null)
		{
			head = p;
		}
		else
		{
			t->next = p;
		}
		
		t = p;
		p->next = head;
	}
	
	p = head;
	
	for(m=1; m<=n; m++)
	{
		for (i=1; i<s; i++)
		{
			t = p;
			p = p->next;
		}
		t->next = p->next;
		p = t->next; 
	}
	

	printf("%15d\n",p->data);

	
	
	
	getchar();
	return 0;
}
