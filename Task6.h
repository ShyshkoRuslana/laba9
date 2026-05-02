#ifndef LABA9_TASK6_H
#define LABA9_TASK6_H
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


void Task6() {
    vector<int> v = {1, -2, 3, -5, 6};

    replace_if(v.begin(), v.end(), [](int x) {
        return x < 0;
    }, 0);

    for (int x : v) cout << x << " ";
    cout << endl;
};


#endif
