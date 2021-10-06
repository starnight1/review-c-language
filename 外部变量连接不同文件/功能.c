extern a; //外部变量声明，说明其他文件中已经定义过名为a的全局变量
int func(int b)
{
	return a*b;
}