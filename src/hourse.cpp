#include "foo.h"
#include <iostream>

void hourse(char* dos[], char s[])
{
    if (((abs(s[0] - s[3]) == 2 && abs(s[1] - s[4]) == 1)
         || (abs(s[0] - s[3]) == 1 && abs(s[1] - s[4]) == 2))
        && dos[(int)(char)s[4]][(int)(char)s[3]]
                == '0') //проверка на коррекность введённых данных и на
                        //существование пешек в этом месте
        std::swap(
                dos[(int)(char)s[1]][(int)(char)s[0]],
                dos[(int)(char)s[4]][(int)(char)s[3]]);
}
