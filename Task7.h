#ifndef LABA9_TASK7_H
#define LABA9_TASK7_H
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void Task7(){
    vector<int> v = {1, 2, 3, 4, 5};

    int sum = 0;

    for_each(v.begin(), v.end(), [&](int x) {
        sum += x;
    });

    double avg = (double)sum / v.size();

    cout << "Sum: " << sum << endl;
    cout << "Avg: " << avg << endl;
};


#endif
