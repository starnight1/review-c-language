/*所谓递归，就是函数调用其本身，典型问题见书179页汉诺塔问题*/

# include <stdio.h>

int digui(int n);//函数的声明，一定要加分号，也可在主函数中声明

void main()
{
	
	int n,result;
	printf("请输入一个正整数\n");
	scanf("%d",&n);
	result=digui(n);//调用递归函数
	printf("%d的阶乘是%d\n",n,result);
}

int digui(int n)//函数定义
{
	int temp;//中间结果，即函数返回值
	if(n<0)	//函数入口测试条件						//三个if语句只选择一个执行
		printf("输入非法\n");
	else if(n==0||n==1)//递归终止条件
		temp=1;
	else
		temp=n*digui(n-1);//递归一般情况
	return temp;//函数返回值，逐层递归，回到主函数
}