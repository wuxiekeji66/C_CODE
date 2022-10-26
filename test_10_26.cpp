#include<stdio.h>
#include<string.h>
//创建结构体类型 
struct Book  //->结构体标签 
{
	//结构体的成员变量 
	char name[20];//c语言程序设计
	short price; //55
		
};
int main()
{
	//利用结构体类型-创建一个该类型的结构体变量 
	struct Book b1 = {"c语言程序设计",55};
	struct Book* pb=&b1;//指针变量 
	//printf("书名:%s\n",(*pb).name);//.（结构体变量.成员）
	//printf("价格:%d\n",(*pb).price);
	printf("书名:《%s》\n",pb->name);//->（结构体指针 ->成员） 
	printf("价格:%d元\n",pb->price);
	//printf("书名:%s\n",b1.name);//.（结构体变量.成员） 
	//printf("价格:%d元\n",b1.price);
	b1.price=15;
	printf("修改后价格:%d元\n",b1.price);
	strcpy(b1.name,"蔡徐坤修炼手册");//-string copy(字符串拷贝)-库函数 
	printf("书名重命名:《%s》\n",b1.name);
	return 0;
}
