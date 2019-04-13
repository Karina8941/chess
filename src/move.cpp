#include <iostream>

using namespace std;

void convert(char s[])
{
    for (int i = 0; i < 5; i += 3) {
        s[i] -= 49;
    }
}

void move()
{
    char s[6];
    for (int i = 1; true; i++) {
        1 : do
        {
            cout << i << ":";
            cin >> s;
            if (s[5] != '\0')
                cout << "Error input" << endl;
        }
        while (s[5] == '\0');
        convert(s);

        for (int i = 0; i < 5; i++) {
            if (!(s[i] >= 49 && s[i] <= 56)) {
                cout << "Error input" << endl;
                goto 1;
            }
            if (i == 1)
                i++;
        }
    }
}