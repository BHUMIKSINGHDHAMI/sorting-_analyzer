#include <iostream>
#include <vector>

#include "input_handler.h"
#include "data_generator.h"
#include "analyzer.h"

using namespace std;

int main() {
    cout << "==== Sorting Algorithm Performance Tool ====\n";

    int method = getInputMethod();
    vector<int> arr;

    if (method == 1) {
        int n = getArraySize();
        int type = getDataType();
        arr = generateData(n, type);
    }
    else if (method == 2) {
        arr = getManualArray();
    }
    else {
        cout << "Invalid choice\n";
        return 0;
    }

    vector<int> algos = getAlgorithmChoices();
    runAnalysis(arr, algos);

    cout << "\nDone.\n";
    return 0;
}