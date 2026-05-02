#ifndef LABA9_TASK2_H
#define LABA9_TASK2_H
#include <array>
#include <algorithm>
#include <iostream>
using namespace std;

bool compare(string a, string b) {
    return a.size() < b.size();
}

void Task2(){
    array<string, 5> names = {"Anna", "Oleksandr", "Ira", "Max", "Kristina"};
    sort(names.begin(), names.end(), compare);
    for (auto s : names) cout << s << " ";
    cout << endl;

};


#endif
