/*利用循环语句求pai=1-1/3-1/5+1/7-.....*/
# include <stdio.h>
# include <math.h>
main()
{
	float pi=0,t=1,n=1;//pi表示1/4*pi，t表示累乘的项目，n表示t的分母
	int k=1;//k为分子的正负控制
	while(fabs(t)>1e-6)
	{
		pi=pi+t;
		n+=2;//累乘项目更新
		k=-k;
		t=k/n;
	}
	printf("%f",4*pi);
}