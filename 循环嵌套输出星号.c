# include <stdio.h>
void main()
{
	int i,j;
	for(i=1;i<7;i++)
	{
		for(j=1;j<=i;j++)
		{
			putchar('*');
		}
		putchar('\n');//��Ϊputchar���ַ������䣬�����ǵ����ţ�����printf��䣬��ӦΪ˫����
	}
}