
# include <stdio.h>

void main()
{
	FILE *wenjian;
	if(wenjian=fopen("D:\\桌面\\C语言复习\\打开文件.doc","w"))//文件地址要双\\,w表示只读模式打开，若该文件不存在，则新建一个。后缀名可以是.c / .doc / .txt等？只要是文本文档就行？
	{
		printf("打开/建立成功");
	}

}