//计算两个数的和
#include<stdio.h>
//int main()
//{
//	int num1,num2;
//	int sum=0;
//	printf("输入两个数：\n");
//	scanf("%d%d",&num1,&num2);
//	sum=num1+num2;
//	printf("sum=%d\n",sum);
//	return 0;
//   
//} 
int Add(int x,int y)
{
    int z=x+y;
    return z;
}
int main()
{
	int num1=0,num2=0,sum=0;
	printf("输入操作的数:\n");
	scanf("%d %d",&num1,&num2);
	sum=Add(num1,num2);
	printf("sum=%d\n",sum);
	return 0;
	
}

