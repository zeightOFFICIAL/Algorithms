/*
Saint Petersburg State University of Telecommunications (SPBSUT)
IKPI-04
Saganenko A.V
Lab 1
Sorting algorithms
- Bubble sort
- Insertion sort
- Gnome sort
- Heap sort
- Stooge sort
originally build on
Clang++ 12 (12.0.1)
compatible with
MSVC 142 (14.29)
main.cpp
18.06.2022
ver 1.215
*/

// input output library
#include <iostream>

// library for testing
#include "sorting/test.h"

// sorting algorithms libraries
#include "sorting/bubble_sort.h"
#include "sorting/gnome_sort.h"
#include "sorting/heap_sort.h"
#include "sorting/insertion_sort.h"
#include "sorting/stooge_sort.h"

int main() {
    std::cout<<"Start."<<"\n";
    
    fulltest(10);

    
    std::cout<<"End."<<"\n";
    return 0;
}