#include<stdio.h>
#pragma warning (disable : 4996)

void SoSimpleFunc(void)
{
	printf("I am so simple");
}

int main()
{
	int num = 20;
	void * ptr;

	ptr = &num; // ���� num�� �ּ� �� ����
	printf("%p\n", ptr);

	ptr = SoSimpleFunc; //�Լ� SoSimpleFunc�� �ּ� �� ����
	printf("%p\n", ptr);

	return 0;
}

// Type�� �������� �ʴ� void pointer 
// void *ptr; �̷��� ���� �ȴ�
// void�� pointer������ �����̵� ���� �� �ִ� �ٱ��Ͽ� ���� �Ѵ�. void�� ������ �������� ��� ������ �ּ� ���̵� ���� �� �ִ�. �ϴ� ���� �Լ��� �ּ� ���� ���� �� �ִ�. 
// ���� �Լ��� �׿� ���� �����̴�. 