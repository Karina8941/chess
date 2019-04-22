#include "foo.h"
#include <iostream>

void quin(char* dos[], char s[])
{
    if ((s[0] == s[3]) || (s[1] == s[4])
        || (abs(s[0] - s[3]) == (abs(s[1] - s[4]))
            && dos[(int)(char)s[4]][(int)(char)s[3]] == '0'))
        std::swap(
                dos[(int)(char)s[1]][(int)(char)s[0]],
                dos[(int)(char)s[4]][(int)(char)s[3]]);
}
