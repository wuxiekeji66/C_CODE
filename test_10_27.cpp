//两个数不同位的个数 
#include<stdio.h>
int get_diff_bit(int m,int n)
{
	int tmp=m^n;    //1010    //1011     //0001  //^ 相同则为0，相异为1 
	int count=0;
	while(tmp)
    {
    	tmp=tmp&(tmp-1);   //1 & 0=0  
    	count++;           //1
	}
	return count;
}
int main()
{
	int m=0,n=0;
	scanf("%d%d",&m,&n);    //10  11
	int count=get_diff_bit(m,n);
	printf("%d",count);
}
