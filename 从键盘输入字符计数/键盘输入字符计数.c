
# include <stdio.h>
# include <stdlib.h>

void main()
{
	int n=0;
	printf("���ڼ�������������һЩ�ַ����Ա���ͳ������\n");
	while(getchar()!='\n')//��б��nһ�����õ�������������������˫���ţ���Ϊ���ַ������������ַ���
	{	
		n++;
	}
	printf("%d",n);
	system("pause");
}


/*
# include <stdio.h>
# include <conio.h>//����getch������ͷ�ļ�
void main()
{
	getch();
	//getchar��getch������getchar�Ӽ��̽����ַ�������Ļ����ʾ�����û�����һ�����ַ�����ֱ������س��������͵���������Ȼ������س����űȽ�
} ��getch�Ӽ��̽����ַ���������Ļ����ʾ�����ܽ�һ���ַ����谴���س����ͽ���
*/