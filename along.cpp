#include<stdio.h>
int main()
{
	int A,B,C=1,D=1,E,F=1,G,i;
	printf("�����һ������:");
	scanf("%d",&A);
	printf("����ڶ�������:");
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
		printf("�뱣֤A>B!\n");
		}
		else
	{
		for(i=1;i<=E;i++)
		F*=i;
		G=(C/D/F);
		printf("m!/n!/(m-n)!�Ľ��:%d\n",G);
	}
	return 0;
}
