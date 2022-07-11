#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <iostream>

using namespace std;

#define Top(S) (S).Top
#define info(S) (S).info

typedef char infotype;

struct stack {
    infotype info[100];
    int Top;
};

void createStack(stack &S);
bool isEmpty(stack S);
bool isFull(stack S);
void push(stack &S, infotype x);
int pop(stack &S);
void printInfo(stack S);
void terima_input(stack &S);

#endif // STACK_H_INCLUDED
