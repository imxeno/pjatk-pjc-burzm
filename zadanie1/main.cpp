#include <iostream>
#include <cmath>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    int delta = b * b - 4 * a * c;
    if(delta > 0) {
        double x1 = (-b - sqrt(delta)) / (2 * a);
        double x2 = (-b + sqrt(delta)) / (2 * a);
        std::cout << "x1: " << x1 << ", x2: " << x2;
    } else if (delta == 0) {
        double x = -b / (2 * a);
        std::cout << "x: " << x << std::endl;
    } else if (delta < 0) {
        std::cout << "brak rozwiazan rzeczywistych" << std::endl;
    }
    return 0;
}