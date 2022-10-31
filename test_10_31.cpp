#include<stdio.h>
int main()
{
	int a=24,b=18,i=0;
	//Õ·×ªÏà³ý·¨ 
	while(i=a%b)
	{
		a=b;//18
		b=i;//6
	}
	printf("%d\n",b);
	return 0;
}
