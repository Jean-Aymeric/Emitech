#include <iostream>
#include "Point.h"

int main() {
    Point A("A", "Point A", 1, 15, 2.3), B("B", "Point B", 15, 0.1, 4), C(A), D("D", C);
    std::cout << A.getInfo() << "\n";
    A++;
    std::cout << A << "\n";
    std::cout << B << "\n";
    std::cout << C << "\n";
    std::cout << D << "\n";
    if (A >= B) {
        std::cout << "le point A >= au point B.\n";
    } else {
        std::cout << "le point A < au point B.\n";
    }
    Point E = (A + B) * (C - B) / D;
    std::cout << E << "\n";

    for (Point i("i", "i", 0, 0, 0); i < A; i = i + 0.1) {
        std::cout << i << "\n";
    }
}
