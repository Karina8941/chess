#include "functions.h"
#include <iostream>
#include <string>
using namespace std;

int mask(string answer, int a)
{
    switch (answer[a]) {
    case 'a':
        return 0;
        break;
    case 'b':
        return 1;
        break;
    case 'c':
        return 2;
        break;
    case 'd':
        return 3;
        break;
    case 'e':
        return 4;
        break;
    case 'f':
        return 5;
        break;
    case 'g':
        return 6;
        break;
    case 'h':
        return 7;
        break;
    default: {
        cout << "EROR: WRONG INPUT CORDINTE" << endl;
        return -1;
    }
    }
}

int xy(step* result, int a, string answer, int first, int white)
{
    if (white == 1) {
        if (first == 1) {
            result->y1 = mask(answer, a);
            if (result->y1 == -1) {
                return 0;
            }
            result->x1 = answer[a + 1] - '0' - 1;
        } else {
            result->y2 = mask(answer, a);
            if (result->y2 == -1) {
                return 0;
            }
            result->x2 = answer[a + 1] - '0' - 1;
        }
    } else {
        if (first == 1) {
            result->y3 = mask(answer, a);
            if (result->y3 == -1) {
                return 0;
            }
            result->x3 = answer[a + 1] - '0' - 1;
        } else {
            result->y4 = mask(answer, a);
            if (result->y4 == -1) {
                return 0;
            }
            result->x4 = answer[a + 1] - '0' - 1;
        }
    }
    return 1;
}

step* read()
{
    string answer;
    cout << "input step: ";
    getline(cin, answer);
    if (answer.length() < 7) {
        cout << "EROR" << endl;
        return 0;
    }
    //
    string numbers = "0/1/2/3/4/5/6/7/8/9";
    //
    step* result = new step;
    int a = 1;
    // peshka belye
    if (numbers.find(answer[a]) == string::npos) {
        result->fw = answer[a - 1];
        a++;
    } else {
        result->fw = 'P';
    }
    // white
    if (!xy(result, a - 1, answer, 1, 1)) {
        return 0;
    }
    if (!xy(result, a + 2, answer, 0, 1)) {
        return 0;
    }
    switch (answer[a + 1]) {
    case '-':
        result->thw = 0;
        break;
    case 'x':
        result->thw = 1;
        break;
    default: {
        cout << "EROR: WRONG INPUT FIRST CORDINTE" << endl;
        return 0;
    }
    }
    //
    a += 6;
    // black
    if (numbers.find(answer[a]) == string::npos) {
        result->fb = answer[a - 1];
        a++;
    } else {
        result->fb = 'p';
    }
    if (!xy(result, a - 1, answer, 1, 0)) {
        return 0;
    }
    if (!xy(result, a + 2, answer, 0, 0)) {
        return 0;
    }
    switch (answer[a + 1]) {
    case '-':
        result->thb = 0;
        break;
    case 'x':
        result->thb = 1;
        break;
    default: {
        cout << "EROR: WRONG INPUT SECOND CORDINTE" << endl;
        return 0;
    }
    }
    return result;
}