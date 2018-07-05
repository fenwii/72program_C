#include "stdio.h"
#include "stdlib.h" 
#define null 0

/* 
建链表从小到大排序输出
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-06-28

*/

typedef struct linklist{
	int data;
	struct linklist *next;
}node;

node *creat(int a[], int n)
{
	node *h,*q;
	for(h=null; n>0; n--)
	{
		q = (node*)malloc(sizeof(node));
		q->data = a[n-1];
		q->next = h;
		h = q;
	}
	return h;
}

void sort(node **h)
{
	node *p,*q,*r,*s,*h1;
	
	h1=p=(node*)malloc(sizeof(node));
	p->next=*h;
	
	while(p->next!=null)
	{
		r = p;
		q = p->next;
	    
	    while(q->next!=null) 
	    {
	    	if(r->next->data>q->next->data)
			{
				r = q;
		    }
		    q = q->next;
		}
		
		if(r!=p)
		{
			s = r->next;
			r->next = s->next;
			s->next = p->next;
			p->next = s;	
		}	
        p = p->next;
	}
	
	*h = h1->next;
	free(h1);
}



int main(int argc, char *argv[]) 
{
	int data[]={2,7,8,6,4,1,3,5,9,0,72,11,12};
	node *h,*p;
	
	h = creat(data,sizeof(data)/sizeof(int));
	sort(&h);
	
	for(p=h;p;p=p->next)
	{
		printf("%4d",p->data);
	}
	
	printf("\n\n");
	
	
	
	getchar(); 
	return 0;
}
