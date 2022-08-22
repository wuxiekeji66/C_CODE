#include<stdio.h>
main()
{
	int i=0;
	int a[]={1,2,3,4,5};
	int max=a[0];
	int min=a[0];
	int sz=sizeof(a)/sizeof(a[0]);
	for(i=0;i<sz;i++)
	{
		if(max<a[i])
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
	printf("最大值=%d\n",max);
	printf("最小值=%d\n",min);
 } 
