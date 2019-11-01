// �Լ� �������� ����

/*
           int(*fptr)(int)����		 
		   (*fptr)--> ������
		   int --> ��ȯ���� int�� �Լ� ������
		   (int) --> �Ű����� ������ int �ϳ��� �Լ� ������
*/

#include <stdio.h>
#pragma warning (disable : 4996)

void SimpleAdder(int n1, int n2)
{
	printf("%d +%d = %d\n", n1, n2, n1 + n2);
}

void ShowSrting(char *str)
{
	printf("%s\n", str);
}

int main()
{
	char *str = "Function Pointer";
	int num1 = 10, num2 = 20;

	void(*fptr1)(int, int) = SimpleAdder;
	void(*fptr2)(char*) = ShowSrting;
	/*�Լ� ������ ������ ���� ȣ�� */
	fptr1(num1, num2);
	fptr2(str);
	return 0;
}

