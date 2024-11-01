#include "Enemy.h"

// コンストラクタで初期状態を設定
Enemy::Enemy() : currentState(0) {
    // 状態ごとのメンバ関数ポインタをテーブルに設定
    state[Approach] = &Enemy::approach;
    state[Shoot] = &Enemy::shoot;
    state[Retreat] = &Enemy::retreat;
}

// 状態を更新する関数
void Enemy::update() {
    // 現在の状態に応じたメンバ関数を呼び出す
    (this->*state[currentState])();
}

// 各状態の処理
void Enemy::approach() {
    printf("敵が接近中...\n");
    currentState = Shoot; // 次の状態に遷移
}

void Enemy::shoot() {
    printf("敵が射撃中...\n");
    currentState = Retreat; // 次の状態に遷移
}

void Enemy::retreat() {
    printf("敵が離脱中...\n");
    currentState = Approach; // 初期状態に戻る
}