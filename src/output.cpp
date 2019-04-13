#include <iostream>

void print(int* dos[])
{
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++)
            std::cout << dos[i][j];
        std::cout << std::endl;
    }
}