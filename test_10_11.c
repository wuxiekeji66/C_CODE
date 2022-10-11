#include<stdio.h>
int main()
{
	int i=0;
	for(i=1;i<=9;i++)//打印9行 
	{
		int j=0;
		for(j=1;j<=i;j++)//打印每一行 
		{
			printf("%d*%d=%-2d ",i,j,i*j);
		}
	    printf("\n");
	}
	return 0;
} 
