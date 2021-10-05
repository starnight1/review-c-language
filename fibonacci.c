/*1 1 2 3 5 8 13*/
/*每次只更新一个数
# include<stdio.h>
void main()
{
	int f1,f2,i,s;
	f1=1,f2=1;
	printf("%d\n%d\n",f1,f2);
	for(i=1;i<=20;i++)
	{
		s=f1+f2;//s是每次更新的第三个数
		f1=f2;
		f2=s;
		printf("%d\n",s);
	}
}
*/


/*每次只更新两个数*/
# include<stdio.h>
void main()
{
	long f1,f2,i;//后面的数较大，所以用long int 型
	f1=1,f2=1;
	for(i=1;i<=5;i++)//因为每次更新两个数，所以求的是2i个斐波那契数（不可以求第奇数个数）
	{
		printf("%d\n%d\n",f1,f2);
		f1=f1+f2;//每次循环的两个数都更新
		f2=f2+f1;
	}
}
