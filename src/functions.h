#ifndef functions
#define functions
#include <string>
using namespace std;
void chess_output(char** a);
char** standart_create();
struct step {
    // white
    int x1;
    int y1;
    int x2;
    int y2;
    char fw;
    int thw;
    // black
    int x3;
    int y3;
    int x4;
    int y4;
    char fb;
    int thb;
    // sh/m
};
step* read();
int check(char** a, step* result);
void move(char** a, step* result);
void chess_output(char** a);
int mask(string answer, int a);
#endif