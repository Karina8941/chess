#include "functions.h"
#include <iostream>
using namespace std;

void chess_output(char** a)
{
    for (int i = 0; i < 8; i++) {
        cout << i + 1 << " | ";
        for (int i1 = 0; i1 < 8; i1++) {
            cout << a[i][i1] << " ";
        }
        cout << endl;
    }
    cout << "    a b c d e f g h" << endl;
}