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
		putchar('\n');//因为putchar是字符输出语句，所以是单引号，若用printf语句，则应为双引号
	}
}