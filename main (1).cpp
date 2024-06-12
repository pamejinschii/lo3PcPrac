#include <iostream>
#include <cmath>
#include <iomanip>

double sum_series_2(int max_terms, double precision, double x) {
    double sum = 0.0;
    for (int k = 1; k <= max_terms; ++k) {
        double term = std::pow(-1, k) * (std::sin(k * x) / (11 + k * k));
        sum += term;
        if (std::abs(term) < precision) break;
    }
    return sum;
}

int main() {
    int max_terms = 1000;
    double precision = 1e-6;
    double x = 1.0; //  x === любое значение
    double result = sum_series_2(max_terms, precision, x);
    std::cout << std::fixed << std::setprecision(6) << "Сумма ряда: " << result << std::endl;
    return 0;
}
