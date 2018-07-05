#include "stdio.h"
#include "stdlib.h" 
#define null 0
 
/* 
合并两个有序链表成为一个有序链表
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

开发环境 DEV-C++ 5.11 
@ 2018-06-28 

*/

typedef struct node {
	int data;
	struct node *next;
}link;

link *creat(int a[], int m)
{
	link *h,*q;
	for(h=null; m; m--)
	{
		q = (link*)malloc(sizeof(link));
		q->data = a[m-1];
		q->next = h;
		h = q;
	}
	return h;
}

link* merge(link *p, link *q)
{
	link *h,*r;
	h = (link*)malloc(sizeof(link));
	h->next = null; 
	r = h;
	while(p!=null && q!=null) 
	{
		if(p->data<=q->data)
		{
			r->next = p;
			r = p;
			p = p->next;	
		}
		else
		{
			r->next = q;
			r = q;
			q = q->next;
		}
		
		if(p==null)
		{
			r->next = q;
		}
		if(q==null)
		{
			r->next = p;
		}
	
	}
		p = h->next;
		free(h);
}
int main(int argc, char *argv[]) 
{
	int a[]={1,2,10,15,23,55,72};
	int b[]={3,4,9,12};
	
	link *h1,*h2,*p;
	
	h1 = creat(a,sizeof(a)/sizeof(int));
	h2 = creat(b,sizeof(b)/sizeof(int));
	
	p = merge(h1,h2);
	
	for(p=h1;p;p=p->next)
	{
		printf("%4d",p->data);
		printf("\n");
	}
	
	return 0;
}
