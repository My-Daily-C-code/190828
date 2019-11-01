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
// void SimpleFunce(TYPE * arr) 이는 TYPE형 1차원 배열의 이름(주소 값)을 인다로 전달 받을 수 있는 매개변수 선언이다. 
// void SimpleFunce(TYPE * char)로 바꾸면 char형 포인터 변수로 이루어신 1차원 배열의 이름을 인자로 전달 받을 수 있는 매개변수의 선언이 된다. 