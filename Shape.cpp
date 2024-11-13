#include <cstdio>
#include "shape.h"

// 定数 π
const double PI = 3.14159265358979323846;

// Circleのコンストラクタ
Circle::Circle(double radius) : radius(radius) {}

// CircleのSize関数
void Circle::Size() const {
    double area = PI * radius * radius; // 面積計算
    printf("Circle Area: %.2f\n", area);
}

// CircleのDraw関数
void Circle::Draw() const {
    printf("Drawing Circle with radius: %.2f\n", radius);
}

// Rectangleのコンストラクタ
Rectangle::Rectangle(double width, double height) : width(width), height(height) {}

// RectangleのSize関数
void Rectangle::Size() const {
    double area = width * height; // 面積計算
    printf("Rectangle Area: %.2f\n", area);
}

// RectangleのDraw関数
void Rectangle::Draw() const {
    printf("Drawing Rectangle with width: %.2f and height: %.2f\n", width, height);
}