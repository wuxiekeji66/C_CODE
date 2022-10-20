//斐波那契数 
//1 1 2 3 5 8 13 ...（前两个数之和） 
#include<stdio.h>
int Fib(int n)
{
	int a=1,b=1,c=1;
	while(n>2)
	{
		c=a+b;
		a=b;
		b=c;
		n--;
	}
	return c;
}
int main()
{
	int n=0;
	scanf("%d",&n);
	int ret=0;
	ret=Fib(n);
	printf("%d",ret);
}
   
   
