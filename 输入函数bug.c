/*
# include <stdio.h>
# include <string.h>
main()
{
	struct student
	{
		char name[20];
		int year;
	};
	struct student stu1;
	//scanf("%d,%s",&stu1.year,stu1.name);//stu1.name֮ǰ��&�ɼӿɲ��ӣ���Ϊname�����飩
	scanf("%s,%d",stu1.name,&stu1.year);
	printf("%s\n%d\n",stu1.name,stu1.year);
}
*/

# include <stdio.h>
# include <string.h>
main()
{
	char name[20];
	int year;
	scanf("%s,%d",name,&year);
	//scanf("%d,%s",&year,name);
	printf("%s\n%d\n",name,year);
}
