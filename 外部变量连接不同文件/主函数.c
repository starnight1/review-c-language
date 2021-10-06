/*通过调用不同文件求2*3的值*/

# include <stdio.h>
# include "功能.c"//说明包含另外一个文件，编译时自动把文件内容插入到该位置。就不用打开该文件了。如果没有这句话，就要把两个文件都打开，同时编译
int a=2;//想要与其他文件共用，则必须是全局变量。若是static int a;则变量a只能在本文件中使用
void main()
{
	int func(int );
	int b=3,result;
	result=func(b);	
	printf("%d",result);
}