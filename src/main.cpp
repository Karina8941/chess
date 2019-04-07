#include <iostream>

using namespace std;

int main()
{
    char dos[8][8];
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++) {
            if (i == 1)
                dos[i][j] = 'p';
            else if (i == 6)
                dos[i][j] = 'P';
            else if ((j == 0 || j == 7) && i == 0)
                dos[i][j] = 'l';
            else if ((j == 0 || j == 7) && i == 7)
                dos[i][j] = 'L';
            else if ((j == 1 || j == 6) && i == 0)
                dos[i][j] = 'k';
            else if ((j == 1 || j == 6) && i == 7)
                dos[i][j] = 'K';
            else if ((j == 2 || j == 5) && i == 0)
                dos[i][j] = 's';
            else if ((j == 2 || j == 5) && i == 7)
                dos[i][j] = 'S';
            else if (j == 4 && i == 0)
                dos[i][j] = 'q';
            else if (j == 4 && i == 7)
                dos[i][j] = 'Q';
            else if (j == 3 && i == 0)
                dos[i][j] = 'f';
            else if (j == 3 && i == 7)
                dos[i][j] = 'F';
            else
                dos[i][j] = '0';
        }
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++)
            cout << dos[i][j];
        cout << endl;
    }
    system("pause");
}
