/*
# include <stdio.h>
void main()
{
	int a,b,max;
	printf("请输入两个整数\n");
	scanf("%d%d",&a,&b);
	max = a;
	if(max<b)
		max=b;//先求出最大值，最后直接输出最大值，不要在if语句中写输出语句:printf("最大值是%d",b),显得麻烦
	else	//删掉
		printf("最大值是%d",max);//如果按照上述注释处理，则else这个词应该去掉，
								//因为若b最大则缺少输出语句
}
*/
# include <stdio.h>
void main()
{
	int a,b,max;
	printf("请输入两个整数\n");
	scanf("%d%d",&a,&b);
	max = a;
	if(max<b)
		max=b;//先求出最大值，最后直接输出最大值，不要在if语句中写输出语句:printf("最大值是%d",b),显得麻烦

		printf("最大值是%d\n",max);//如果按照上述注释处理，则else这个词应该去掉，
								//因为若b最大则缺少输出语句
}
