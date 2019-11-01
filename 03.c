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

	ptr = &num; // 변수 num의 주소 값 저장
	printf("%p\n", ptr);

	ptr = SoSimpleFunc; //함수 SoSimpleFunc의 주소 값 저장
	printf("%p\n", ptr);

	return 0;
}

// Type이 존재하지 않는 void pointer 
// void *ptr; 이렇게 선언 된다
// void형 pointer변수는 무엇이든 담을 수 있는 바구니에 비유 한다. void형 포인터 변수에는 어떠한 변수의 주소 값이든 담을 수 있다. 하다 못해 함수의 주소 값도 담을 수 있다. 
// 위의 함수는 그에 대한 예시이다. 