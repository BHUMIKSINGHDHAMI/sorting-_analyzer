#include <iostream>
#include <vector>

#include "analyzer.h"
#include "metrics.h"
#include "timer.h"

#include "bubble_sort.h"
#include "selection_sort.h"
#include "insertion_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"
#include "count_sort.h"

using namespace std;

void runAnalysis(const vector<int>& arr,
                 const vector<int>& algos) {

    for (int id : algos) {
        vector<int> temp = arr;
        Metrics m;
        double t = 0;

        if (id == 1) { cout << "\nBubble Sort\n"; t = measureTime(bubbleSort,temp,m); }
        else if (id == 2){ cout << "\nSelection Sort\n"; t = measureTime(selectionSort,temp,m); }
        else if (id == 3){ cout << "\nInsertion Sort\n"; t = measureTime(insertionSort,temp,m); }
        else if (id == 4){ cout << "\nMerge Sort\n"; t = measureTime(mergeSort,temp,m); }
        else if (id == 5){ cout << "\nQuick Sort\n"; t = measureTime(quickSort,temp,m); }
        else if (id == 6){ cout << "\ncount Sort\n"; t = measureTime(countSort,temp,m); }
        else continue;

        cout << "Time(ms): " << t << "\n";
        cout << "Comparisons: " << m.comparisons << "\n";
        cout << "Swaps: " << m.swaps << "\n";
    }
}