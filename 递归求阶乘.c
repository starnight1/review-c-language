/*��ν�ݹ飬���Ǻ��������䱾�������������179ҳ��ŵ������*/

# include <stdio.h>

int digui(int n);//������������һ��Ҫ�ӷֺţ�Ҳ����������������

void main()
{
	
	int n,result;
	printf("������һ��������\n");
	scanf("%d",&n);
	result=digui(n);//���õݹ麯��
	printf("%d�Ľ׳���%d\n",n,result);
}

int digui(int n)//��������
{
	int temp;//�м���������������ֵ
	if(n<0)	//������ڲ�������						//����if���ֻѡ��һ��ִ��
		printf("����Ƿ�\n");
	else if(n==0||n==1)//�ݹ���ֹ����
		temp=1;
	else
		temp=n*digui(n-1);//�ݹ�һ�����
	return temp;//��������ֵ�����ݹ飬�ص�������
}