#include <iostream>
#include "input_handler.h"

using namespace std;

int getInputMethod() {
    int ch;
    cout << "1. Auto Generate\n2. Manual Input\nChoice: ";
    cin >> ch;
    return ch;
}

int getArraySize() {
    int n;
    cout << "Array size: ";
    cin >> n;
    return n;
}

int getDataType() {
    int t;
    cout << "1.Random  2.Sorted  3.Reverse Sorted\nChoice: ";
    cin >> t;
    return t;
}

vector<int> getManualArray() {
    int n;
    cout << "Number of elements: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) cin >> a[i];
    return a;
}

vector<int> getAlgorithmChoices() {
    vector<int> c;
    int x;
    cout << "1.Bubble sort\n 2.Selection sort\n3.Insertion sort\n 4.Merge sort\n5.Quick sort\n6.count sort\n(0 stop)\n";
    while (true) {
        cin >> x;
        if (x == 0) break;
        c.push_back(x);
    }
    return c;
}