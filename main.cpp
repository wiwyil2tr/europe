#include <stdio.h> //输入输出有关的函数
#include <math.h> //数学函数 求任意两个整数之和
int main() //函数首部
{ float a,b,s; //定义变量
	     printf("请输入两个数\n");
	     scanf("%f,%f",&a,&b);// 10 2 16
	     s=a+b;//注意顺序 赋值
             printf("s=%.2f\n",s);//s=   普通字符 原样输出
}//函数体
