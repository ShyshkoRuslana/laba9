#ifndef LABA9_TASK1_H
#define LABA9_TASK1_H
#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

bool isOdd(int n) {
    return n % 2 != 0;
}

void Task1() {
    list<int> lst;
    for (int i = 0; i < 20; i++) {
        lst.push_back(rand() % 100);
    }
    cout << "Before:\n";
    for (int x : lst) cout << x << " ";
    lst.remove_if(isOdd);
    cout << "\nAfter:\n";
    for (int x : lst) cout << x << " ";
    cout << endl;

};


#endif
