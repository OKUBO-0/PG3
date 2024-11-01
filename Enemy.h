#pragma once

#include <iostream>

class Enemy {
public:
    // 状態を示すenum
    enum State {
        Approach,
        Shoot,
        Retreat,
        StateCount // 状態の数をカウントするための変数
    };

    // コンストラクタ
    Enemy();

    // 状態を更新する関数
    void update();

private:
    // 各状態のメンバ関数
    void approach();
    void shoot();
    void retreat();

    // 状態を管理するメンバ関数ポインタテーブル
    void (Enemy::* state[StateCount])();

    // 現在の状態
    int currentState;
};