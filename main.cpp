#include "shape.h"

int main() {
    // Circleのインスタンス生成
    Circle circle(5.0);
    circle.Size();    // 面積を計算
    circle.Draw();    // 描画を行う

    // Rectangleのインスタンス生成
    Rectangle rectangle(4.0, 6.0);
    rectangle.Size(); // 面積を計算
    rectangle.Draw(); // 描画を行う

    return 0;
}