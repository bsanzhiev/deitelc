// Игра в кости

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Перечисление констант, представляющих состояние игры
enum Status
{
    CONTINUE,
    WON,
    LOST
};

int rollDice(void);

int main(void)
{
    int sum;
    int myPoint;

    enum Status gameStatus;

    srand(time(NULL));

    sum = rollDice();

    switch (sum)
    {
    // Выигрыш при первом броске:
    case 7:
    case 11:
        gameStatus = WON;
        break;

    // Проигрыш при первом броске:
    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        break;

    default:
        gameStatus = CONTINUE;
        myPoint = sum;
        printf("Point is %d\n", myPoint);
        break;
    }

    while (CONTINUE == gameStatus)
    {
        sum = rollDice();

        if (sum == myPoint)
        {
            gameStatus = WON;
        }
        else
        {
            if (7 == sum)
            {
                gameStatus = LOST;
            }
        }
    }
    if (WON == gameStatus)
    {
        puts("Player wins!");
    }
    else
    {
        puts("Player loses.");
    }
}

int rollDice(void)
{
    int die1;
    int die2;
    int workSum;

    die1 = 1 + (rand() % 6);

    die2 = 1 + (rand() % 6);

    workSum = die1 + die2;
    printf("Player rolled %d + %d = %d\n", die1, die2, workSum);
    return workSum;
}
