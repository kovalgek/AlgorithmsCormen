//
//  MergeSort.cpp
//  MergeSort
//
//  Created by Anton Kovalchuk on 09/01/2020.
//  Copyright © 2020 Anton Kovalchuk. All rights reserved.
//

#include "MergeSort.hpp"
#include <iostream>

using namespace std;

/// Order of growth is Θ(n*lg(n))
/// middleIndex is index of last element of left array. That's why second call is
/// sortArray(array, middleIndex + 1, rightIndex) and why left array size is
/// int leftArraySize = middleIndex - leftIndex + 1;
void MergeSort::calculate(int *array, int leftIndex, int rightIndex)
{
    if (leftIndex < rightIndex)
    {
        int middleIndex = (rightIndex + leftIndex) / 2;
        // recursion call for left half
        calculate(array, leftIndex, middleIndex);
        // recursion call for right half
        calculate(array, middleIndex + 1, rightIndex);
        // merge results
        merge(array, leftIndex, middleIndex, rightIndex);
    }
}

void MergeSort::merge(int *array, int leftIndex, int middleIndex, int rightIndex)
{
    int leftArraySize = middleIndex - leftIndex + 1;
    int rightArraySize = rightIndex - middleIndex;
    
    // create temporary arrays
    int leftArray[leftArraySize + 1];
    int rightArray[rightArraySize + 1];
    
    for (int i = 0; i < leftArraySize; ++i)
    {
        leftArray[i] = array[leftIndex + i];
    }
    
    for (int i = 0; i < rightArraySize; ++i)
    {
        rightArray[i] = array[middleIndex + i + 1];
    }
    
    // add sentinel elements
    leftArray[leftArraySize] = INT_MAX;
    rightArray[rightArraySize] = INT_MAX;
    
    int leftArrayIndex = 0;
    int rightArrayIndex = 0;
    
    // merge two sorted arrays into one
    for (int arrayIndex = leftIndex; arrayIndex <= rightIndex; ++arrayIndex)
    {
        if (leftArray[leftArrayIndex] <= rightArray[rightArrayIndex])
        {
            array[arrayIndex] = leftArray[leftArrayIndex];
            ++leftArrayIndex;
        }
        else
        {
            array[arrayIndex] = rightArray[rightArrayIndex];
            ++rightArrayIndex;
        }
    }
}
