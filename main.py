import numpy as np
from scipy.integrate import quad

# Определяем функцию
def integrand(x):
    return x * (11 + x**2)**-7

# Вычисляем определенный интеграл от 0 до 2
result, error = quad(integrand, 0, 2)

print(f"Численное значение интеграла: {result:.10f}")
