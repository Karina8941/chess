#include "functions.h"
#include <iostream>
using namespace std;

char** standart_create()
{
    char** a = new char*[8];
    for (int i = 0; i < 8; i++) {
        a[i] = new char[8];
    }
    a[0][0] = 'r';
    a[0][1] = 'n';
    a[0][2] = 'b';
    a[0][3] = 'q';
    a[0][4] = 'k';
    a[0][5] = 'b';
    a[0][6] = 'n';
    a[0][7] = 'r';
    a[7][0] = 'R';
    a[7][1] = 'N';
    a[7][2] = 'B';
    a[7][3] = 'Q';
    a[7][4] = 'K';
    a[7][5] = 'B';
    a[7][6] = 'N';
    a[7][7] = 'R';
    for (int i = 0; i < 8; i++) {
        a[1][i] = 'p';
    }
    for (int i = 0; i < 8; i++) {
        a[6][i] = 'P';
    }
    for (int i = 2; i < 6; i++) {
        for (int ii = 0; ii < 8; ii++) {
            a[i][ii] = ' ';
        }
    }
    return a;
}