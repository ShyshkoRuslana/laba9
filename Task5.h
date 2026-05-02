#ifndef LABA9_TASK5_H
#define LABA9_TASK5_H
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;

void Task5() {
    map<string, int> m = {
            {"Apple", 50},
            {"Banana", 200},
            {"Milk", 150}
    };

    for_each(m.begin(), m.end(), [](pair<string,int> p) {
        if (p.second > 100)
            cout << p.first << " " << p.second << endl;
    });

};


#endif
