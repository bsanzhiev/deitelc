// Создание собственной функции
#include <stdio.h>

int square(int y); // прототип функции

int main(void)
{
    int x;

    for(x = 1; x <= 10; ++x) {
        printf( "%d  ", square(x));
    }

    puts("");
}

int square(int y)
{
    return y * y;
}
