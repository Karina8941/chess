#include "functions.h"
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int check(char** a, step* result)
{
    if (result->x1 > 8 || result->x2 > 8 || result->x3 > 8 || result->x4 > 8
        || result->x1 < 1 || result->x2 < 1 || result->x3 < 1
        || result->x4 < 1) {
        cout << "EROR: out of range" << endl;
        return 0;
    }
    string white = "KQRNBP";
    string black = "kqrnbp";
    if (white.find(a[result->x1][result->y1]) == string::npos) {
        cout << "EROR: in" << result->x1 << " " << result->y1 << " not white"
             << endl;
        return 0;
    }
    if (black.find(a[result->x3][result->y3]) == string::npos) {
        cout << "EROR: in" << result->x3 << " " << result->y3 << " not black"
             << endl;
        return 0;
    }
    // check x and -
    // white
    if (result->thw == 0) {
        if (a[result->x2][result->y2] != ' ') {
            cout << "EROR: in" << result->x2 << " " << result->y2
                 << " something" << endl;
            return 0;
        }
    } else {
        if (black.find(a[result->x2][result->y2]) == string::npos) {
            cout << "EROR: in" << result->x2 << " " << result->y2
                 << " not black" << endl;
            return 0;
        }
    }
    // black
    if (result->thb == 0) {
        if (a[result->x4][result->y4] != ' ') {
            cout << "EROR: in" << result->x4 << " " << result->y4
                 << " something" << endl;
            return 0;
        }
    } else {
        if (white.find(a[result->x4][result->y4]) == string::npos) {
            cout << "EROR: in" << result->x4 << " " << result->y4
                 << " not white" << endl;
            return 0;
        }
    }
    // pawnW
    if (result->fw == 'P') {
        if (a[result->x1][result->y1] != 'P') {
            cout << "EROR: " << result->x1 << "x" << result->y1 << " not P"
                 << endl;
            return 0;
        }
        if (result->x1 != 6 && result->x1 - result->x2 > 1) {
            cout << "EROR: x>1" << endl;
            return 0;
        }
        if (result->x1 == 6 && result->x1 - result->x2 > 2) {
            cout << "EROR: x>2" << endl;
            return 0;
        }
        if (result->y1 != result->y2 && result->thw != 1) {
            cout << "EROR: y" << endl;
            return 0;
        }
        if (result->thw == 1
            && (result->y1 - result->y2 > 1
                || abs(result->y2 - result->y1) > 1)) {
            cout << "EROR: y" << endl;
            return 0;
        }
    }
    // pawnb
    if (result->fb == 'p') {
        if (a[result->x3][result->y3] != 'p') {
            cout << "EROR: " << result->x1 << "x" << result->y1 << " not P"
                 << endl;
            return 0;
        }
        if (result->x3 != 1 && result->x4 - result->x3 > 1) {
            cout << "EROR: x>1" << endl;
            return 0;
        }
        if (result->x3 == 2 && result->x4 - result->x3 > 2) {
            cout << "EROR: x>2" << endl;
            return 0;
        }
        if (result->y3 != result->y4 && result->thb != 1) {
            cout << "EROR: y" << endl;
            return 0;
        }
        if (result->thb == 1
            && (result->y3 - result->y4 > 1
                || abs(result->y4 - result->y3) > 1)) {
            cout << "EROR: y" << endl;
            return 0;
        }
    }
    // all
    if (result->fw != a[result->x1][result->y1]) {
        cout << "EROR: " << result->fw << " != " << a[result->x1][result->y1]
             << endl;
        return 0;
    }
    if (result->fb != a[result->x3][result->y3]) {
        cout << "EROR: " << result->fb << " != " << a[result->x3][result->y3]
             << endl;
        return 0;
    }
    return 1;
}