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
    1 : cin >> s;
    if (s[5] != '\0')
        cout << "Error input" << endl;
    convert(s);

    for (int i = 0; i < 5; i++) {
        if (!(s[i] >= 49 && s[i] <= 56)) {
            cout << "Error input" << endl;
            goto 1;
        }
        if (i == 1)
            i++;
    }

    if (s[0] == s[3] && (s[4] - s[1] == 1 || (s[0] == 1 && s[4] - s[1] == 2)))
        swap(dos[(char)s[1]][(char)s[0]], dos[(char)s[4]][(char)s[3]]);
}
}
