#include<stdio.h>
#include<string.h>
//�����ṹ������ 
struct Book  //->�ṹ���ǩ 
{
	//�ṹ��ĳ�Ա���� 
	char name[20];//c���Գ������
	short price; //55
		
};
int main()
{
	//���ýṹ������-����һ�������͵Ľṹ����� 
	struct Book b1 = {"c���Գ������",55};
	struct Book* pb=&b1;//ָ����� 
	//printf("����:%s\n",(*pb).name);//.���ṹ�����.��Ա��
	//printf("�۸�:%d\n",(*pb).price);
	printf("����:��%s��\n",pb->name);//->���ṹ��ָ�� ->��Ա�� 
	printf("�۸�:%dԪ\n",pb->price);
	//printf("����:%s\n",b1.name);//.���ṹ�����.��Ա�� 
	//printf("�۸�:%dԪ\n",b1.price);
	b1.price=15;
	printf("�޸ĺ�۸�:%dԪ\n",b1.price);
	strcpy(b1.name,"�����������ֲ�");//-string copy(�ַ�������)-�⺯�� 
	printf("����������:��%s��\n",b1.name);
	return 0;
}
