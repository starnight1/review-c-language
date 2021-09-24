
# include <stdio.h>
# include <stdlib.h>

void main()
{
	int n=0;
	printf("请在键盘上随意输入一些字符，以便于统计字数\n");
	while(getchar()!='\n')//反斜杆n一定是用单引号括起来，而不是双引号，因为是字符常量而不是字符串
	{	
		n++;
	}
	printf("%d",n);
	system("pause");
}


/*
# include <stdio.h>
# include <conio.h>//包含getch函数的头文件
void main()
{
	getch();
	//getchar与getch的区别：getchar从键盘接受字符并在屏幕上显示，若用户输入一连串字符，则直到输入回车结束才送到缓冲区。然后再与回车符号比较
} 而getch从键盘接受字符但不在屏幕上显示，接受仅一个字符无需按动回车键就结束
*/