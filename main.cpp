#include <iostream>
#include <random>
#include <vector>

#include "selectionSortA.h"
#include "selectionSortB.h"
#include "mergesort.h"
#include "quicksort.h"

int main() {
    std::random_device rd; //Obtain a random number from hardware for seed
    std::mt19937 gen(rd()); //Seed the generator

    // Create a vector of 100 integers
    std::vector<int> arr(100);
    std::uniform_int_distribution<int> dist(0, 100);
    for (int i = 0; i < 100; ++i) { // Fill the vector with random numbers between 0 and 100
        arr[i] = dist(gen);
    }

    // Sort the array using selection sort A (expects std::vector<int>&)
    selectionSortA(arr);
    for (int i = 0; i < 100; ++i) { // Print the array
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;


    return 0;
}