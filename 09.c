// 도전 프로그래밍 3번

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;

	for (i = 0; i<5; i++)
	{
		printf(" 난수 출력: %d \n", rand() % 100);
	}

	return 0;
}
