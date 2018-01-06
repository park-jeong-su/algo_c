#include <stdio.h>

int main(void)
{
	int A,B,C;
	int answer[10]={};
	int i=0;

	scanf("%d %d %d",&A,&B,&C);
	A=A*B*C;
	for(;A!=0;)
	{
		B=A%10;
		A=A/10;
		answer[B]++;
	}
	for(i=0;i<=9;i++)
	{
		printf("%d\n",answer[i]);
	}
	return 0;
}
