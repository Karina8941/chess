#include "foo.h"
#include <iostream>

using namespace std;

void rook(char* dos[], char s[])
{
    if ((s[0] == s[3] || s[1] == s[4]) && dos[(int)(char)s[4]][(int)(char)s[3]] == '0')//проверка на коррекность введённых данных и на существование пешек в этом месте
        swap(dos[(int)(char)s[1]][(int)(char)s[0]],
             dos[(int)(char)s[4]][(int)(char)s[3]]);

}