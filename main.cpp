//Zackary Rippee CSCI 430 Program 1


#include <iostream>
#include <random>
#include <vector>

#include "selectionSortA.h"
#include "selectionSortB.h"
#include "mergesort.h"
#include "quicksort.h"

int main() {
    std::random_device rd; //Obtain a random number from hardware for seeding
    std::mt19937 gen(rd()); //Seed the generator
    int MAX = 100;
    // Create a vector of MAX integers
    std::vector<int> arr(MAX);
    std::uniform_int_distribution<int> dist(0, MAX);
    for (int i = 0; i < MAX; ++i) { // Fill the vector with random numbers between 0 and MAX
        arr[i] = dist(gen);
    }

    // Sort the array using selection sort A 
    selectionSortA(arr);
    for (int i = 0; i < MAX; ++i) { // Print the array
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < MAX; ++i) { // Refill the vector with random numbers between 0 and MAX
        arr[i] = dist(gen);
    }
    // Sort the array using selection sort B
    selectionSortB(arr);
    for (int i = 0; i < MAX; ++i) { // Print the array
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < MAX; ++i) { // Refill the vector with random numbers between 0 and MAX
        arr[i] = dist(gen);
    }
    // Sort the array using mergesort
    mergesort(arr);
    for (int i = 0; i < MAX; ++i) { // Print the array
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < MAX; ++i) { // Refill the vector with random numbers between 0 and MAX
        arr[i] = dist(gen);
    }
    // Sort the array using quicksort
    quicksort(arr);
    for (int i = 0; i < MAX; ++i) { // Print the array
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}