#include<stdio.h>
//int main()
//{
//	int num1,num2;
//	printf("����������:\n");
//	scanf("%d%d",&num1,&num2);
//	if(num1<num2)
//	  printf("���ֵ=%d",num2);
//	else
//	  printf("���ֵ=%d",num1);
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
	printf("������ֵ:\n");
	scanf("%d%d",&num1,&num2);
	max=Max(num1,num2);
	printf("max=%d\n",max);
	return 0;
}
