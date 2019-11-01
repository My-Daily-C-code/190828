// 함수 포인터의 선언

/*
           int(*fptr)(int)에서		 
		   (*fptr)--> 포인터
		   int --> 반환형이 int인 함수 포인터
		   (int) --> 매개변수 선언이 int 하나인 함수 포인터
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
	/*함수 포인터 변수에 의한 호출 */
	fptr1(num1, num2);
	fptr2(str);
	return 0;
}

