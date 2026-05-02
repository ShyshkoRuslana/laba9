#ifndef LABA9_TASK4_H
#define LABA9_TASK4_H
#include <set>
#include <algorithm>
#include <iostream>
using namespace std;

struct WithinRange {
    int min, max;
    WithinRange(int a, int b) : min(a), max(b) {}

    bool operator()(int x) {
        return x >= min && x <= max;
    }
};

void Task4(){
    set<int> s = {1, 5, 10, 15, 20, 25};

    int count = count_if(s.begin(), s.end(), WithinRange(10, 20));

    cout << "Count: " << count << endl;
};


#endif
