#include "foo.h"
#include <iostream>

void elephant(char* dos[], char s[])
{
    if ((abs(s[0] - s[3]) == (abs(s[1] - s[4])) && dos[(int)(char)s[4]][(int)(char)s[3]] == '0')//проверка на коррекность введённых данных и на существование пешек в этом месте
        swap(dos[(int)(char)s[1]][(int)(char)s[0]],
             dos[(int)(char)s[4]][(int)(char)s[3]]);

}