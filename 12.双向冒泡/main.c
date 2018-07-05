#include <stdio.h>

/* 
@author 72编程
微信公众号：72编程 
All Rights Reserved By 分微科技（FENWII）

@ 2018-06-25 

*/
int main(int argc, char *argv[]) 
{
	int i, t, low, high, n = 10, temp;
	int a[10] = {5,9,3,4,7,6,2,8,0,1} ;
	
	low = 0;
	high = n-1;
	
	do
	{
	t=0;
	
	for(i=low; i<high; i++)
	{
		if(a[i]<a[i+1])
		{
			temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
		}
	}	
		t = i;
		high = t-1;	
	
	for(i=high; i>low; i--)
	{
		if(a[i]>a[i-1])
		{
			temp = a[i];
			a[i] = a[i-1];
			a[i-1] = temp;
		}
	}	
			t = i;
			low = t+1;		
	
	}while(low<=high);
	
	

	
	for(i=0; i<n; i++)
	{
		printf("%4d",a[i]);
	}
	printf("\n\n");
	getchar();
	
	return 0;
}
