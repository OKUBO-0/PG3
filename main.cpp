#include "shape.h"

int main() {
    Circle circle;
    Rectangle rectangle;

    // Circleの初期化
    Circle_Init(&circle, 5.0);
    circle.base.Size(&circle);    // 面積を計算
    circle.base.Draw(&circle);    // 描画を行う

    // Rectangleの初期化
    Rectangle_Init(&rectangle, 4.0, 6.0);
    rectangle.base.Size(&rectangle); // 面積を計算
    rectangle.base.Draw(&rectangle); // 描画を行う

    return 0;
}