#include<stdio.h>
int main()
{
	int i=0;
	for(i=1;i<=9;i++)//��ӡ9�� 
	{
		int j=0;
		for(j=1;j<=i;j++)//��ӡÿһ�� 
		{
			printf("%d*%d=%-2d ",i,j,i*j);
		}
	    printf("\n");
	}
	return 0;
} 
