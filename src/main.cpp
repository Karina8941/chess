#include "functions.h"

int main()
{
    char** a = standart_create();
    while (1) {
        chess_output(a);
        step* result = new step;
        result = read();
        if (result == 0) {
            return 0;
        }
        if (!check(a, result)) {
            return 0;
        }
        move(a, result);
    }
}