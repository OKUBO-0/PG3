#include <stdio.h>
#include <math.h>
#include "shape.h"

// 定数 π
const double PI = 3.14159265358979323846;

// CircleのSize関数
void Circle_Size(void* self) {
    Circle* circle = (Circle*)self;
    double area = PI * circle->radius * circle->radius; // 面積計算
    printf("Circle Area: %.2f\n", area);
}

// CircleのDraw関数
void Circle_Draw(void* self) {
    Circle* circle = (Circle*)self;
    printf("Drawing Circle with radius: %.2f\n", circle->radius);
}

// RectangleのSize関数
void Rectangle_Size(void* self) {
    Rectangle* rect = (Rectangle*)self;
    double area = rect->width * rect->height; // 面積計算
    printf("Rectangle Area: %.2f\n", area);
}

// RectangleのDraw関数
void Rectangle_Draw(void* self) {
    Rectangle* rect = (Rectangle*)self;
    printf("Drawing Rectangle with width: %.2f and height: %.2f\n", rect->width, rect->height);
}

// CircleとRectangleの初期化
void Circle_Init(Circle* circle, double radius) {
    circle->base.Size = Circle_Size;
    circle->base.Draw = Circle_Draw;
    circle->radius = radius;
}

void Rectangle_Init(Rectangle* rect, double width, double height) {
    rect->base.Size = Rectangle_Size;
    rect->base.Draw = Rectangle_Draw;
    rect->width = width;
    rect->height = height;
}