#include "foo.h"
#include <iostream>

void print(char* dos[])
{
    system("cls");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++)
            std::cout << dos[i][j];
        std::cout << std::endl;
    }
}