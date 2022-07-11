#include "Stack.h"

// membuat stack
void createStack(stack &S) {
    Top(S) = 0;
}

// cek stack kosong
bool isEmpty(stack S) {

    if (Top(S)==0) {
        return true;
    } else {
        return false;
    }
}

// cek stack full
bool isFull(stack S) {

    if (Top(S)==10) {
        return true;
    } else {
        return false;
    }
}

void push(stack &S, infotype x) {

    if (isFull(S)==false) {
        Top(S)++;
        info(S)[Top(S)] = x;
    }
}

int pop(stack &S) {

    infotype x;

    x = info(S)[Top(S)];
    Top(S)--;
    return x;
}

void printInfo(stack S) {
    for(int i=Top(S); i>0; i--) {
        cout<<info(S)[i]<< " ";
    }
}

void terima_input(stack &S) {
    char data, y, x;
    stack S2;
    createStack(S);

    cout << "Masukkan data char : ";
    cin >> data;
    while (data != '.') {
        if (data < info(S)[Top(S)] && Top(S) != 0) {
            y = pop(S);
            push(S2, y);
        }
        push(S, data);

        cout << "Masukkan data char : ";
        cin >> data;
    }
    while (!isEmpty(S2)) {
        x = pop(S2);
        push(S, x);
    }
}
