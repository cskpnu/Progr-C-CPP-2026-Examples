# Програмування

# Лабораторна робота № 1
# Тема: БАЗОВІ ЕЛЕМЕНТИ МОВИ ТА ЛІНІЙНІ ПРОГРАМИ

## Виконавець: 
## Студент: Шевченко А.А.
## Група: KN1-B25

### Завдання 1.
Варіант: Приклад (Типовий)

#### Умова завдання
Дано два дійсних числа a та b. Знайти їх середнє арифметичне та середнє геометричне їхніх модулів.
Математична модель:
* Середнє арифметичне: $Avg = (a + b) / 2$
* Середнє геометричне модулів: $Geo = \sqrt{|a| \cdot |b|}$

#### Програмна реалізація
```cpp
// Lab-01-01.cpp
#include <iostream>
#include <cmath>    // Потрібна для sqrt() та fabs()
#include <iomanip>  // Потрібна для setprecision (красиве виведення)

using namespace std;

int main() {
    double a, b;

    cout << "Enter a and b: ";
    cin >> a >> b;

    double arithmetic_mean = (a + b) / 2.0;
    // fabs(x) повертає модуль дійсного числа |x|
    double geometric_mean = sqrt(fabs(a) * fabs(b));

    cout << fixed << setprecision(3); // Налаштування: 3 знаки після коми
    cout << "Arithmetic mean: " << arithmetic_mean << endl;
    cout << "Geometric mean:  " << geometric_mean << endl;

    return 0;
}
#### Результати виконання та їх аналіз
Програма коректно обчислила середні значення.
Вхідні дані: 5 та -6.

* Середнє арифметичне: $(5 + (-6)) / 2 = -0.5$.
* Середнє геометричне: $\sqrt{|5| \cdot |-6|} = \sqrt{30} \approx 5.477$.

Результат консолі:
```text
Enter a and b: 5 -6
Arithmetic mean: -0.500
Geometric mean:  5.477
