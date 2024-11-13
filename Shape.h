#ifndef SHAPE_H
#define SHAPE_H

#include <cmath>

// 抽象クラス IShape
class IShape {
public:
    virtual ~IShape() {}         // 仮想デストラクタ
    virtual void Size() const = 0;  // 純粋仮想関数: 面積を求める
    virtual void Draw() const = 0;  // 純粋仮想関数: 描画を行う
};

// Circleクラス
class Circle : public IShape {
public:
    Circle(double radius);
    void Size() const override;  // 面積計算
    void Draw() const override;  // 描画

private:
    double radius;
};

// Rectangleクラス
class Rectangle : public IShape {
public:
    Rectangle(double width, double height);
    void Size() const override;  // 面積計算
    void Draw() const override;  // 描画

private:
    double width;
    double height;
};

#endif // SHAPE_H