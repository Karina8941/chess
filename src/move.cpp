#include "functions.h"

void move(char** a, step* result)
{
    a[result->x2][result->y2] = result->fw;
    a[result->x1][result->y1] = ' ';
    a[result->x4][result->y4] = result->fb;
    a[result->x3][result->y3] = ' ';
}