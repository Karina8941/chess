#include "../src/functions.h"
#include "../thirdparty/ctest.h"
#include <string>
using namespace std;
CTEST(p_st_h, check)
{
    char** b = standart_create();
    step* a = new step;
    for (int x = 1; x < 3; x++) {
        for (int y = 0; y < 8; y++) {
            a->x1 = 6;
            a->x2 = 6 - x;
            a->x3 = 1;
            a->x4 = 1 + x;
            a->y1 = y;
            a->y2 = y;
            a->y3 = y;
            a->y4 = y;
            a->fw = 'P';
            a->fb = 'p';
            a->thw = 0;
            a->thb = 0;
            ASSERT_EQUAL(1, check(b, a));
        }
    }
    //
    for (int y = 0; y < 8; y++) {
        b[6][y] = ' ';
        b[5][y] = 'P';
        b[1][y] = ' ';
        b[2][y] = 'p';
    }
    for (int y = 0; y < 8; y++) {
        a->x1 = 5;
        a->x2 = 5 - 2;
        a->x3 = 2;
        a->x4 = 2 + 2;
        a->y1 = y;
        a->y2 = y;
        a->y3 = y;
        a->y4 = y;
        a->fw = 'P';
        a->fb = 'p';
        a->thw = 0;
        a->thb = 0;
        ASSERT_EQUAL(0, check(b, a));
    }
}

CTEST(Nothing, check)
{
    char** b = standart_create();
    step* a = new step;
    for (int y = 0; y < 8; y++) {
        b[6][y] = ' ';
        b[5][y] = 'P';
        b[1][y] = ' ';
        b[2][y] = 'p';
    }
    for (int y = 0; y < 8; y++) {
        a->x1 = 6;
        a->x2 = 5;
        a->x3 = 1;
        a->x4 = 2;
        a->y1 = y;
        a->y2 = y;
        a->y3 = y;
        a->y4 = y;
        a->fw = 'P';
        a->fb = 'p';
        a->thw = 0;
        a->thb = 0;
        ASSERT_EQUAL(0, check(b, a));
    }
}

CTEST(Kill, check)
{
    char** b = standart_create();
    step* a = new step;
    for (int y = 0; y < 8; y++) {
        b[6][y] = ' ';
        b[5][y] = 'P';
        b[1][y] = ' ';
        b[2][y] = 'p';
    }
    for (int y = 0; y < 8; y++) {
        a->x1 = 5;
        a->x2 = 4;
        a->x3 = 2;
        a->x4 = 3;
        a->y1 = y;
        a->y2 = y + 1;
        a->y3 = y;
        a->y4 = y + 1;
        a->fw = 'P';
        a->fb = 'p';
        a->thw = 1;
        a->thb = 1;
        ASSERT_EQUAL(0, check(b, a));
    }
}

CTEST(out_of_range, check)
{
    char** b = standart_create();
    step* a = new step;
    for (int y = 0; y < 8; y++) {
        b[6][y] = ' ';
        b[5][y] = 'P';
        b[1][y] = ' ';
        b[2][y] = 'p';
    }
    for (int y = 0; y < 8; y++) {
        a->x1 = 7;
        a->x2 = -1;
        a->x3 = 2;
        a->x4 = 3;
        a->y1 = y;
        a->y2 = y + 1;
        a->y3 = y;
        a->y4 = y + 1;
        a->fw = 'R';
        a->fb = 'p';
        a->thw = 1;
        a->thb = 1;
        ASSERT_EQUAL(0, check(b, a));
    }
}

CTEST(figure, check)
{
    string aaa = "abcdefgh";
    for (int i = 0; i < 8; i++) {
        ASSERT_EQUAL(0, mask(aaa, 0));
    }
}