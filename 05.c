#include <stdio.h>
#pragma warning (disable: 4996)

void ShowAllString(int argc, char * argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s \n", argv[i]);
}

int main()
{
	char *str[3] = {
		"C programming",
		"C++ programming",
		"JAVA programming"
	};
	ShowAllString(3, str);
	return 0;

}
// char *argv[]
// void SimpleFunce(TYPE * arr) �̴� TYPE�� 1���� �迭�� �̸�(�ּ� ��)�� �δٷ� ���� ���� �� �ִ� �Ű����� �����̴�. 
// void SimpleFunce(TYPE * char)�� �ٲٸ� char�� ������ ������ �̷��� 1���� �迭�� �̸��� ���ڷ� ���� ���� �� �ִ� �Ű������� ������ �ȴ�. 