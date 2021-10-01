#include<stdio.h>
void main()
{
	int low=0,high=9,middle,n,found=0;
	int a[10]={0,1,1,3,8,10,25,70,85,100};
	printf("请输入一个数字\n");
	scanf("%d",&n);
	while(low<=high)
	{
		middle=(low+high)/2;
		if(n==a[middle])
		{
			found=1;//表示找到
			break;//不加break则找到该数后会一直在循环里跳不出去，永远执行下去
		}
		if(n<a[middle])
		{
			high=middle-1;
		}
		if(n>a[middle])//若用else语句则错误，if..else语句是必须执行一次的语句，所以要么将三个选择全用else语句嵌套起来，要么全用if语句分开
		{
			low=middle+1;
		}
	}
	if(found==1)
	{
		printf("数字%d的序号为%d",n,middle);
	}
	else
	{
			printf("没有找到");
	}
}