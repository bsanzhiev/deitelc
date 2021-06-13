// Подсчет количества оценок с помощью switch
#include <stdio.h>

int main(void)
{
    int grade;
    unsigned int a_count = 0;
    unsigned int b_count = 0;
    unsigned int c_count = 0;
    unsigned int d_count = 0;
    unsigned int f_count = 0;

    puts("Enter the letter grades.");
    puts("Enter the EOF char to end input.");

    while((grade = getchar()) != EOF) {
        switch(grade) {
            case 'A':
            case 'a':
                ++a_count;
                break;
            
            case 'B':
            case 'b':
                ++b_count;
                break;
            
            case 'C':
            case 'c':
                ++c_count;
                break;
            
            case 'D':
            case 'd':
                ++d_count;
                break;

            case 'F':
            case 'f':
                ++f_count;
                break;
            
            case '\n':
            case '\t':
            case ' ':
            break;
        default:
            printf("%s", "Incorrect letter grade entered.");
            puts("Enter a new grade.");
            break;
        }
    }

    puts("\nTotal for each letter grade are:");
    printf("A: %u\n", a_count);
    printf("B: %u\n", b_count);
    printf("C: %u\n", c_count);
    printf("D: %u\n", d_count);
    printf("F: %u\n", f_count);
}
