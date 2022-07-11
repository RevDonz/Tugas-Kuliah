#include "stack.h"

void createStack(stack &S) {
    Top(S) = 0;
}

bool isEmpty(stack S) {
    if (Top(S) == 0) {
        return true;
    } else {
        return false;
    }
}

bool isFull(stack S) {
    if (Top(S) == 10) {
        return true;
    } else {
        return false;
    }
}

void push(stack &S, infotype x) {
    if (!isFull(S)) {
        Top(S) = Top(S)+1;
        info(S)[Top(S)] = x;
    } else {
        cout << "Maaf Stack sudah penuh" << endl;
    }
}

int pop(stack &S) {
    int x = info(S)[Top(S)];
    Top(S)-=1;
    return x;
}

void printInfo(stack S) {
    for (int i = Top(S); i >= 1; i--) {
        cout << info(S)[i] << " ";
    }
    cout << endl;
}

void ascending(stack &S) {
    int temp;
    int n = Top(S)+1;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            if (info(S)[i] > info(S)[j]) {
                temp = info(S)[i];
                info(S)[i] = info(S)[j];
                info(S)[j] = temp;
            }
        }
    }

}

void descending(stack &S) {
    int temp;
    int n = Top(S)+1;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            if (info(S)[i] < info(S)[j]) {
                temp = info(S)[i];
                info(S)[i] = info(S)[j];
                info(S)[j] = temp;
            }
        }
    }

}
