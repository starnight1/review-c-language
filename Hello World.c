# include <stdio.h>//先通过工程选择使用环境win32 console application 并选择位置并命名工程，再通过文件c++ source file 命名***.c 。.c是为了指明是c文件因为用的是c++编译器。也可通过文件c/c++ header 命名***.c 不可以写成.h
# include <stdlib.h> // 包含system("pause")的头文件             
                   
void main()
{
	//system("pause");
	printf("你好，世界\n");
	system("pause");//命令行上输出一行“请按任意键继续...”的字，等待用户按一个键，然后继续执行。这样直接执行.exe文件的话就可以看见结果，不会一闪而过
}