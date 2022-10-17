#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
void menu()
{
	printf("\n************************\n");
	printf("****1.play    2.exit****\n");
	printf("************************\n"); 
}
void game()
{
	int ret=0,guess=0;
	//RAND_MAX -32767 
	ret=rand()%100+1;//生成1-100的随机数.
    while(1)
    {
    	printf("猜猜这个数是(1-100)>:");
	    scanf("%d",&guess);
    	if(guess>ret)
    	  printf("笨蛋,猜大了\n");
    	else if(guess<ret)
    	  printf("傻瓜,猜小了\n");
    	else
    	{
    		printf("恭喜你，猜对了!!!\n\n");
    		break;
		}
	}
}
int main()
{
	int input=0;
	srand((unsigned int)time(NULL));//拿时间戳来设置随机数的生成起始点 
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
			{
			    printf("开始游戏:\n");
				game();//猜数字游戏 
				break;
		    }
			case 2:
				printf("退出游戏\n");
		        break;
		    default:
		    	printf("选择错误\n");
		    	break;
		}
	}while(input);
	return 0;		
}
