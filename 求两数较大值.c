#include<stdio.h>
//int main()
//{
//	int num1,num2;
//	printf("输入俩个数:\n");
//	scanf("%d%d",&num1,&num2);
//	if(num1<num2)
//	  printf("最大值=%d",num2);
//	else
//	  printf("最大值=%d",num1);
//	return 0;
//}
int Max(int x,int y)
{
    if(x>y)
      return x;
    else
      return y;
}
int main()
{
	int num1=0,num2=0,max=0;
	printf("输入数值:\n");
	scanf("%d%d",&num1,&num2);
	max=Max(num1,num2);
	printf("max=%d\n",max);
	return 0;
}
