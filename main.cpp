#include "Enemy.h"

int main() {
    Enemy enemy;

    // 3回状態遷移を表示
    for (int i = 0; i < 3; ++i) {
        enemy.update();
    }

    return 0;
}