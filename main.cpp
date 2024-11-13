#include <stdio.h>

// 2つの異なる型を扱うクラステンプレート
template <typename T1, typename T2>
class MinFinder {
public:
    // 2つの異なる型の値の小さい方を返すメンバ関数
    auto Min(T1 a, T2 b) -> decltype(a < b ? a : b) {
        return (a < b) ? a : b;
    }
};

int main() {
    // int と float の組み合わせ
    MinFinder<int, float> intFloatFinder;
    printf("Min(int, float): %.2f\n", intFloatFinder.Min(5, 10.2f));

    // int と double の組み合わせ
    MinFinder<int, double> intDoubleFinder;
    printf("Min(int, double): %.2f\n", intDoubleFinder.Min(5, 10.123));

    // float と double の組み合わせ
    MinFinder<float, double> floatDoubleFinder;
    printf("Min(float, double): %.2f\n", floatDoubleFinder.Min(5.5f, 10.123));

    // int と int の組み合わせ
    MinFinder<int, int> intIntFinder;
    printf("Min(int, int): %d\n", intIntFinder.Min(5, 10));

    // float と float の組み合わせ
    MinFinder<float, float> floatFloatFinder;
    printf("Min(float, float): %.2f\n", floatFloatFinder.Min(5.5f, 10.2f));

    // double と double の組み合わせ
    MinFinder<double, double> doubleDoubleFinder;
    printf("Min(double, double): %.2f\n", doubleDoubleFinder.Min(5.555, 10.123));

    return 0;
}