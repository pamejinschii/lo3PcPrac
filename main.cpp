#include <iostream>
#include <cmath>
#include <iomanip>

double sum_series_1(int max_terms, double precision) {
    double sum = 0.0;
    for (int k = 1; k <= max_terms; ++k) {
        double term = (11.0 / (2 * k - 1)) * std::pow(-1, k - 1);
        sum += term;
        if (std::abs(term) < precision) break;
    }
    return sum;
}

int main() {
    int max_terms = 1000;
    double precision = 1e-6;
    double result = sum_series_1(max_terms, precision);
    std::cout << std::fixed << std::setprecision(6) << "Сумма ряда: " << result << std::endl;
    return 0;
}
