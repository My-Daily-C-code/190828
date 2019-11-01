#include <stdio.h>
#pragma warning (disable: 4996)

int main(int argc, char *argv[])
{
	int i = 0;
	printf("전달 된 문자열의 수: %d\n ", argc);

	for (i = 0; i < argc; i++)
		printf("%d문자열: %s \n", i + 1, argv[i]);
	return 0;
}
//main 함수를 통한 인자의 전달