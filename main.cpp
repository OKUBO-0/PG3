#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// コールバック関数のプロトタイプ宣言
typedef void (*callback_t)(int result);

// サイコロの出目を決定する関数
int roll_dice() {
    return rand() % 6 + 1;
}

// 判定を行うコールバック関数
void judge_result(int result) {
    int user_guess;
    printf("サイコロの出目が奇数(1)か偶数(2)かを入力してください : ");
    scanf_s("%d", &user_guess);

    printf("判定中...\n");
    Sleep(3000);  // 3秒待機 (ミリ秒単位)

    if ((result % 2 == 1 && user_guess == 1) || (result % 2 == 0 && user_guess == 2)) {
        printf("正解\n");
    }
    else {
        printf("不正解\n");
    }

    printf("サイコロの出目は%d でした。\n", result);  // 出目を表示
}

// メイン関数
int main() {
    srand((int)time(NULL));  // 乱数シードを設定

    int dice_result = roll_dice();
    callback_t callback = judge_result;

    callback(dice_result);  // コールバック関数を呼び出し

    return 0;
}