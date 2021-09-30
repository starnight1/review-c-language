/*该删除方法很经典*/

# include <stdio.h>

void delete_string(char str[],char c)
{
	int i,j;
	for(i=0,j=0;str[i] !='\0';i++)//i用来遍历数组，j用来保存删除字符后的数组
	{
		if(str[i] != c)//不等于该字符则拷贝过去，相当于删除等于该字符的
		{
			str[j]=str[i];
			j++;
		}
	}
	//puts(str);
	str[j]='\0';//字符串结束标志，不加呢？如果不加，则因为结束时j++，所以相当于str[j]的值为原来字符串的第j+1个字符，所以要借助该语句将j+1个字符清零
	//puts(str);
}