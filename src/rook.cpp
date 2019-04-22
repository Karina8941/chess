#include "foo.h"
#include <iostream>

using namespace std;

void rook(char* dos[])
{
    char s[6];
L:
    cin >> s;
    if (s[5] != '\0')
        cout << "Error input" << endl;
    convert(s);

    for (int i = 0; i < 5; i++) {
        if (!(s[i] >= 49 && s[i] <= 56)) {
            cout << "Error input" << endl;
            goto L;
        }
        if (i == 1)
            i++;
    }


    if (s[0] == s[3] && (s[4] - s[1] == 1 || (s[0] == 1 && s[4] - s[1] == 2)) && dos[(int)(char)s[1]][(int)(char)s[0]] == 'p')//проверка на коррекность введённых данных и на существование пешек в этом месте
        swap(dos[(int)(char)s[1]][(int)(char)s[0]],
             dos[(int)(char)s[4]][(int)(char)s[3]]);

    if (s[0] == s[3] && (s[1] - s[4] == 1 || (s[0] == 6 && s[1] - s[4] == 2)) && dos[(int)(char)s[1]][(int)(char)s[0]] == 'P')
        swap(dos[(int)(char)s[1]][(int)(char)s[0]],
             dos[(int)(char)s[4]][(int)(char)s[3]]);

}