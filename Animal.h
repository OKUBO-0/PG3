#pragma once

#include <stdio.h>

// 基底クラス
class Animal {
public:
    virtual void makeSound(); // 仮想関数
    virtual ~Animal() {} // 仮想デストラクタ
};

// 派生クラス Dog
class Dog : public Animal {
public:
    void makeSound() override; // オーバーライド
};

// 派生クラス Cat
class Cat : public Animal {
public:
    void makeSound() override; // オーバーライド
};