#ifndef LABA9_TASK8_H
#define LABA9_TASK8_H
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

bool isVowel(char c) {
    string vowels = "aeiouAEIOU";
    return vowels.find(c) != string::npos;
}


void Task8(){
    string text = "Hello World";

    int count = count_if(text.begin(), text.end(), isVowel);

    cout << "Vowels: " << count << endl;
};


#endif
