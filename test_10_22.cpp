#include<stdio.h>
int main()
{
	int ret=1,sum=0;
	int n=0;
	int i=0;
	scanf("%d",&n);  //3
	for(i=1;i<=n;i++)
	{
	   ret*=i;//nµÄ½×³Ë  3*2*1 
	   sum+=ret; //3!+2!+1! 
    }
     printf("ret=%d",ret);
    printf("sum=%d",sum);
    
	return 0;
}
