#include<stdio.h>
int Swap(int* pa,int* pb)
{
	int tmp=0;
	tmp=*pa;
	*pa=*pb;
	*pb=tmp;
}
int main()
{
	int a=10,b=20;
	printf("a=%d b=%d\n",a,b);
	Swap(&a,&b);
	printf("a=%d b=%d",a,b);
	return 0;
}
