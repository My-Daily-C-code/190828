// 도전 프로그래밍 4번

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RollDie(void);

int main(void)
{
	int roll1, roll2;

	srand((int)time(NULL));

	roll1 = RollDie();
	roll2 = RollDie();

	printf("주사위 결과 : %d, %d \n", roll1, roll2);
	return 0;
}

int RollDie()
{
	return rand() % 6 + 1;
}
