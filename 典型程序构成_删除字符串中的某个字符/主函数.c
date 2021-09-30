/*本程序通过调用不同功能的函数文件实现从输入的字符串中删除某字符，并将结果输出。本例是典型程序构成，值得学习*/
//一般的：每个.h文件里存放每个函数的声明 , 每个.c文件中存放每个函数的具体定义。然后在主函数中用双引号文件包含一下就可以了
# include <stdio.h>
# include <stdlib.h> 


# include "字符串输入功能.c"//文件包含，不写的话则必须把其他几个文件也打开并编译，否则运行时出错。
# include "删除字符功能.c"  //这样写，在编译时直接在工程文件夹处找到这些文件并将它们的程序填充在此处。
# include "字符串打印功能.c"
void main()
{
	/*先声明将要在其他文件中调用的函数，extern说明允许被不同文件的函数调用，不加也一样*/

	extern void enter_string(char str[]); //最好将函数声明放在.h文件中                   //输入字符串。数组要定义大小吗?不用定义数组大小，因为只是传递首地址
	extern void delete_string(char str[],char c);                          //删除某字符
	extern void print_string(char str[]);                                 //将结果打印出来

	//以上三句话可以不用写，因为文件包含.c文件，当编译时，自动将.c文件中的内容插入，则函数就声明在主函数之前了。
	char c;//要删除的字符
	char str[100];

	printf("请输入一串字符\n");
	enter_string(str);//调用输入函数
	printf("请输入待删除的一个字符");
	scanf("%c",&c);
	delete_string(str,c);
	print_string(str);

	getchar();//为什么要多加一个getchar将换行符吸收掉呢？
	getchar();//这两句作用等同system（pause）
	//system("pause");

}
