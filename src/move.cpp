#include "foo.h"
#include <iostream>

using namespace std;

void convert(char s[])
{
    for (int i = 0; i < 5; i += 3) {
        s[i] -= 49;
    }
}

void move(char* dos[])
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

    if (s[0] == s[3] && (s[4] - s[1] == 1 || (s[0] == 1 && s[4] - s[1] == 2)))
        swap(dos[(int)(char)s[1]][(int)(char)s[0]],
             dos[(int)(char)s[4]][(int)(char)s[3]]);
}
