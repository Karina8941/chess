#include "foo.h"
#include <iostream>

void move(char* dos[], char s[])
{
    if (s[0] == s[3] && (s[4] - s[1] == 1 || (s[0] == 1 && s[4] - s[1] == 2))
        && dos[(int)(char)s[4]][(int)(char)s[3]] == '0')
        std::swap(
                dos[(int)(char)s[1]][(int)(char)s[0]],
                dos[(int)(char)s[4]][(int)(char)s[3]]);
    else if (
            s[0] == s[3]
            && (s[1] - s[4] == 1 || (s[0] == 6 && s[1] - s[4] == 2))
            && dos[(int)(char)s[4]][(int)(char)s[3]] == '0')
        std::swap(
                dos[(int)(char)s[1]][(int)(char)s[0]],
                dos[(int)(char)s[4]][(int)(char)s[3]]);
}
