// Рекурсивная функция Фибоначчи

#include <stdio.h>

// прототип функции
unsigned long long fibonacci(unsigned int n);

int main(void)
{
    unsigned long long result;
    unsigned int number;
    //int *number = NULL;

    // Запросить число у пользователя
    printf("%s", "Enter an integer: ");
    scanf("%u", &number);

    /* Вычислить число Фибоначчи с порядковым номером,
    заданным пользователем */
    result = fibonacci(number);

    // Вывести число
    printf("Fibonacci(%u) = %llu\n", number, result);
}

// Рекурсивная функция
unsigned long long fibonacci(unsigned int n)
{
    // Базовый случай
    if (0 == n || 1 == n)
    {
        return n;
    }
    // Основное вычисление функции
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
