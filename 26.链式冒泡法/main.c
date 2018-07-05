#include "stdio.h"
#include "stdlib.h" 
#define null 0 

/* 
链式冒泡法 
 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-06-28 

*/

typedef struct linklist{
	int data;
	struct linklist *link;
}node;
node * creat(int a[], int n)
{
	node *h,*q;
	for(h=null; n>0; n--)
	{
		q = (node*)malloc(sizeof(node));
		q->data = a[n-1];
		q->link = h;
		h = q;
	}
	return h;
}

node *booble_sort(node *h)
{
	node *endpt,*u,*v,*p;
	
	u = (node*)malloc(sizeof(node));
	u->link = h;
	h = u;
	
	for(endpt=null; endpt!=h; endpt=p) 
	{
		for(p=u=h;u->link->link!=endpt; u=u->link) 
		{
			if(u->link->data>u->link->link->data)
			{
				v = u->link->link;
				u->link->link = v->link;
				v->link = u->link; 
				u->link = v;
				p = u->link->link;
			}	
		}
	}
		    u = h;
		    h = h->link;
			free(u);
			return h;
}
int main(int argc, char *argv[]) 
{
	int a[] = {1,3,9,2,72,6,5,8,7,0,2018};
	
	node * h1,*h2,*p;
	
	h1 = creat(a,sizeof(a)/sizeof(int));
	h2 = booble_sort(h1);
	
	for(p=h2;p;p=p->link)
	{
		printf("%4d",p->data);
		printf("\n");
	}
	
	return 0;
}
