/*����ѭ�������pai=1-1/3-1/5+1/7-.....*/
# include <stdio.h>
# include <math.h>
main()
{
	float pi=0,t=1,n=1;//pi��ʾ1/4*pi��t��ʾ�۳˵���Ŀ��n��ʾt�ķ�ĸ
	int k=1;//kΪ���ӵ���������
	while(fabs(t)>1e-6)
	{
		pi=pi+t;
		n+=2;//�۳���Ŀ����
		k=-k;
		t=k/n;
	}
	printf("%f",4*pi);
}