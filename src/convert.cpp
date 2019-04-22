#include "foo.h"
#include <iostream>

void convert(char s[])
{
    for (int i = 0; i < 5; i += 3)
        s[i] -= 49;
    for (int i = 1; i < 5; i += 3)
        s[i]--;
}