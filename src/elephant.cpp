#include "foo.h"
#include <iostream>
#include <cmath.h>
#include <stdlib.h>

void elephant(char* dos[], char s[])
{
    if (abs(s[0] - s[3])
        == (abs(s[1] - s[4]) && dos[(int)(char)s[4]][(int)(char)s[3]] == '0'))
        std::swap(
                dos[(int)(char)s[1]][(int)(char)s[0]],
                dos[(int)(char)s[4]][(int)(char)s[3]]);
}
