// Сложение чисел
#include <stdio.h>

int main( void )
{
    int integer1;
    int integer2;
    int sum;

    printf( "Enter first number\n" );       // вывести текст приглашения
                                            // к вводу
    scanf( "%d", &integer1 );               // прочитать целое число

    printf( "Enter second number\n" );      // вывести текст приглашения
                                            // к вводу
    scanf( "%d", &integer2 );               // прочитать целое число

    sum = integer1 + integer2;
    printf( "Sum is %d\n", sum );           // вывести сумму
} // конец функции main
