/*1 1 2 3 5 8 13*/
/*ÿ��ֻ����һ����
# include<stdio.h>
void main()
{
	int f1,f2,i,s;
	f1=1,f2=1;
	printf("%d\n%d\n",f1,f2);
	for(i=1;i<=20;i++)
	{
		s=f1+f2;//s��ÿ�θ��µĵ�������
		f1=f2;
		f2=s;
		printf("%d\n",s);
	}
}
*/


/*ÿ��ֻ����������*/
# include<stdio.h>
void main()
{
	long f1,f2,i;//��������ϴ�������long int ��
	f1=1,f2=1;
	for(i=1;i<=5;i++)//��Ϊÿ�θ��������������������2i��쳲����������������������������
	{
		printf("%d\n%d\n",f1,f2);
		f1=f1+f2;//ÿ��ѭ����������������
		f2=f2+f1;
	}
}
