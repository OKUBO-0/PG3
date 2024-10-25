#include <stdio.h>
#include <stdlib.h>  
#include <time.h>    
#include <windows.h> 

int diceRoll() {
	return rand() % 6 + 1;
}

void Result(int* result) {
	if (*result == 1) {
		printf("正解\n");
	}
	else {
		printf("不正解\n");
	}
}

void setTime(void (*pFunc)(int*), int seconds, int* result) {
	Sleep(seconds * 1000);
	pFunc(result);
}

auto captureInput = [&](int& num) {
	printf("サイコロの出目が奇数(1)か偶数(2)かを入力してください : ");
	scanf_s("%d", &num);
	};

int main() {
	srand(time(NULL));

	int num, dice, ans;
	captureInput(num);

	dice = diceRoll();
	printf("判定中...\n");

	if ((dice % 2 == 0 && num == 2) || (dice % 2 != 0 && num == 1)) {
		ans = 1;
	}
	else {
		ans = 0;
	}

	setTime(Result, 3, &ans);
	printf("サイコロの出目は%d でした\n", dice);

	return 0;
}