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
	ret=rand()%100+1;//����1-100�������.
    while(1)
    {
    	printf("�²��������(1-100)>:");
	    scanf("%d",&guess);
    	if(guess>ret)
    	  printf("����,�´���\n");
    	else if(guess<ret)
    	  printf("ɵ��,��С��\n");
    	else
    	{
    		printf("��ϲ�㣬�¶���!!!\n\n");
    		break;
		}
	}
}
int main()
{
	int input=0;
	srand((unsigned int)time(NULL));//��ʱ����������������������ʼ�� 
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
			{
			    printf("��ʼ��Ϸ:\n");
				game();//��������Ϸ 
				break;
		    }
			case 2:
				printf("�˳���Ϸ\n");
		        break;
		    default:
		    	printf("ѡ�����\n");
		    	break;
		}
	}while(input);
	return 0;		
}
