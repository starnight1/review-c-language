/*
# include <stdio.h>
void main()
{
	int a,b,max;
	printf("��������������\n");
	scanf("%d%d",&a,&b);
	max = a;
	if(max<b)
		max=b;//��������ֵ�����ֱ��������ֵ����Ҫ��if�����д������:printf("���ֵ��%d",b),�Ե��鷳
	else	//ɾ��
		printf("���ֵ��%d",max);//�����������ע�ʹ�����else�����Ӧ��ȥ����
								//��Ϊ��b�����ȱ��������
}
*/
# include <stdio.h>
void main()
{
	int a,b,max;
	printf("��������������\n");
	scanf("%d%d",&a,&b);
	max = a;
	if(max<b)
		max=b;//��������ֵ�����ֱ��������ֵ����Ҫ��if�����д������:printf("���ֵ��%d",b),�Ե��鷳

		printf("���ֵ��%d\n",max);//�����������ע�ʹ�����else�����Ӧ��ȥ����
								//��Ϊ��b�����ȱ��������
}
