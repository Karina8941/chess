#include "foo.h"
#include <iostream>

using namespace std;

int main()
{
    char s[5];
    char** dos = new char*[8];
    for (int i = 0; i < 8; i++) {
        dos[i] = new char[8];
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
    }
    print(dos);
    while (true) {
    L:
        cin >> s;
        if (s[5] != '\0') {
            cout << "Error input" << endl;
            goto L;
        }
        convert(s);

        for (int i = 0; i < 5; i++) {
            if (!(s[i] >= 49 && s[i] <= 56)) {
                cout << "Error input" << endl;
                goto L;
            }
            if (i == 1)
                i++;
        }

        switch (dos[(int)s[1]][(int)s[0]]) {
        case 'p':
        case 'P':
            move(dos, s);
            break;
        case 'l':
        case 'L':
            rook(dos, s);
            break;
        case 'k':
        case 'K':
            hourse(dos, s);
            break;
        case 's':
        case 'S':
            elephant(dos, s);
            break;
        case 'f':
        case 'F':
            quin(dos, s);
            break;
        case 'q':
        case 'Q':
            king(dos, s);
            break;
        default:
            break;
        }
        print(dos);
    }
    system("pause");
}
