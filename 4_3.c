// Вычисление суммы с помощью for
#include <stdio.h>

int main(void) {
  unsigned int sum = 0;
  unsigned int number;

  for (number = 2; number <= 100; number += 2) {
    sum += number;
  } // конец инструкции for

  printf("Sum is %u\n", sum); // вывести сумму
} // конец функции main
