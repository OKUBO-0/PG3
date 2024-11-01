#pragma once

// 抽象クラス IShape
typedef struct IShape {
    void (*Size)(void* self);  // 面積を求める関数ポインタ
    void (*Draw)(void* self);  // 描画を行う関数ポインタ
} IShape;

// Circleクラス
typedef struct {
    IShape base;  // IShapeのメンバ
    double radius; // 半径
} Circle;

// Rectangleクラス
typedef struct {
    IShape base;  // IShapeのメンバ
    double width; // 幅
    double height; // 高さ
} Rectangle;

// 関数の宣言
void Circle_Init(Circle* circle, double radius);
void Rectangle_Init(Rectangle* rect, double width, double height);