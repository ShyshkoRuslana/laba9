#ifndef LABA9_TASK3_H
#define LABA9_TASK3_H
#include <deque>
#include <algorithm>
#include <iostream>
using namespace std;

struct xAlir {
    double rate;
    xAlir(double r) : rate(r) {}
    void operator()(double &price) {
        price += price * rate;
    }
};
void Task3() {
    deque<double> prices = {10, 20, 30};
    for_each(prices.begin(), prices.end(), xAlir(0.5));
    for (double p : prices) cout << p << " " ;
    cout << endl;
};


#endif
