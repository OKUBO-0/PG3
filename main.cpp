#include<stdio.h>

int Recursive(int n) {
	return n * 1072;
}

int Recursive2(int n) {
	if (n <= 1) {
		return (100);
	}
	return (Recursive(n - 1) * 2 - 50);
}

int main() {
	int n = 3;
	int result{};
	int result2{};

	result = Recursive(n);
	result2 = Recursive2(n);

	printf("一般的な資金体系で%d時間 = %d\n", n, result);
	printf("再帰的な資金体系で%d時間 = %d\n", n, result2);

	return 0;
}