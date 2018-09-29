#include<stdio.h>
int main()
{
	int A,B,C=1,D=1,E,F=1,G,i;
	printf("输入第一个整数:");
	scanf("%d",&A);
	printf("输入第二个整数:");
	scanf("%d",&B);
	{
		for(i=1;i<=A;i++)
		C*=i;
		for(i=1;i<=B;i++)
		D*=i;
	}
		
	E=A-B;
		if(E<0)
		{
		printf("请保证A>B!\n");
		}
		else
	{
		for(i=1;i<=E;i++)
		F*=i;
		G=(C/D/F);
		printf("m!/n!/(m-n)!的结果:%d\n",G);
	}
	return 0;
}
