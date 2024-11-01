#include <stdio.h>

// クラステンプレートの定義
template <typename T>
class MinFinder {
public:
    // 2つの引数の小さい方を返すメンバ関数
    T Min(T a, T b) {
        return (a < b) ? a : b;
    }
};

int main() {
    // int型のインスタンス
    MinFinder<int> intFinder;
    printf("Min(int): %d\n", intFinder.Min(5, 10));

    // float型のインスタンス
    MinFinder<float> floatFinder;
    printf("Min(float): %.2f\n", floatFinder.Min(5.5f, 10.2f));

    // double型のインスタンス
    MinFinder<double> doubleFinder;
    printf("Min(double): %.2f\n", doubleFinder.Min(5.555, 10.123));

    // intとfloatのインスタンス
    MinFinder<float> intFloatFinder;
    printf("Min(int, float): %.2f\n", intFloatFinder.Min(5, 10.2f));

    // intとdoubleのインスタンス
    MinFinder<double> intDoubleFinder;
    printf("Min(int, double): %.2f\n", intDoubleFinder.Min(5, 10.123));

    // floatとdoubleのインスタンス
    MinFinder<double> floatDoubleFinder;
    printf("Min(float, double): %.2f\n", floatDoubleFinder.Min(5.5f, 10.123));

    return 0;
}