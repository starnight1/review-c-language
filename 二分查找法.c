#include<stdio.h>
void main()
{
	int low=0,high=9,middle,n,found=0;
	int a[10]={0,1,1,3,8,10,25,70,85,100};
	printf("������һ������\n");
	scanf("%d",&n);
	while(low<=high)
	{
		middle=(low+high)/2;
		if(n==a[middle])
		{
			found=1;//��ʾ�ҵ�
			break;//����break���ҵ��������һֱ��ѭ����������ȥ����Զִ����ȥ
		}
		if(n<a[middle])
		{
			high=middle-1;
		}
		if(n>a[middle])//����else��������if..else����Ǳ���ִ��һ�ε���䣬����Ҫô������ѡ��ȫ��else���Ƕ��������Ҫôȫ��if���ֿ�
		{
			low=middle+1;
		}
	}
	if(found==1)
	{
		printf("����%d�����Ϊ%d",n,middle);
	}
	else
	{
			printf("û���ҵ�");
	}
}