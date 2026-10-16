
#include <stdio.h>

int main() {
    int row, col;
    const int rows = 3;
    const int cols = 13;

    for (row = 0; row < rows; row++) {
        for (col = 0; col < cols; col++) {
            int print_star = 0;

            if (row == 0 && (col == 0 || col == 4 || col == 6 || col == 10 || col == 12))
                print_star = 1;
            if (row == 1 && (col >= 1 && col <= 11))
                print_star = 1;
            if (row == 2 && (col == 2 || col == 6 || col == 11))
                print_star = 1;

            if (print_star)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}