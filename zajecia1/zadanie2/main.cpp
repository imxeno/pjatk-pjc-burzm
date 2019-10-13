#include <iostream>

int main() {
    double wzrost, waga;
    std::cout << "Podaj wzrost w metrach: ";
    std::cin >> wzrost;
    std::cout << "Podaj wage w kilogramach: ";
    std::cin >> waga;
    double bmi = waga / (wzrost * wzrost);
    std::cout << "BMI: " << bmi;
    return 0;
}