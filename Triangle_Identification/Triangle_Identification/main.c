#include <stdio.h>

int main(void)
{
	//���� ���̴� a < b < c��� �����Ѵ�.
	int a = 0, b = 0, c = 0;

	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c)
	{
		printf("���ﰢ��");
	}
	else if (a*a + b * b == c * c)
	{
		printf("�����ﰢ��");
	}
	else if ((a == b || a == c || b == c) && a + b > c)
	{
		printf("�̵�ﰢ��");
	}
	else if (a + b > c)
	{
		printf("�ﰢ��");
	}
	else
		printf("�ﰢ���ƴ�");
}