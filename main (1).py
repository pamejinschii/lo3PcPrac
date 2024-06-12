import numpy as np
from scipy.integrate import quad

# Определяем функцию
def integrand(x):
    return np.exp(-2*x) * np.sin(11*x)

# Вычисляем определенный интеграл от 0 до бесконечности
result, error = quad(integrand, 0, np.inf)

print(f"Численное значение интеграла: {result:.10f}")