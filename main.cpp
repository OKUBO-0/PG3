#include <stdio.h>

// 再帰的な賃金を計算する関数
int recursive_wage(int hours) {
    if (hours == 1) {
        return 100;  // 最初の1時間は100円
    }
    return recursive_wage(hours - 1) * 2 - 50;  // 再帰的な賃金計算
}

int main() {
    const int standard_wage = 1072;  // 一般的な賃金体系の時給
    int total_standard_wage = 0;
    int total_recursive_wage = 0;

    // 働く時間を決める
    int hours;
    printf("働いた時間（時間単位）を入力してください: ");
    scanf_s("%d", &hours);

    // 一般的な賃金体系の計算
    total_standard_wage = standard_wage * hours;

    // 再帰的な賃金体系の計算
    for (int i = 1; i <= hours; ++i) {
        total_recursive_wage += recursive_wage(i);
    }

    // 結果の表示
    printf("一般的な賃金体系の合計: %d円\n", total_standard_wage);
    printf("再帰的な賃金体系の合計: %d円\n", total_recursive_wage);

    if (total_recursive_wage > total_standard_wage) {
        printf("再帰的な賃金体系の方が儲かります。\n");
    }
    else {
        printf("一般的な賃金体系の方が儲かります。\n");
    }

    return 0;
}