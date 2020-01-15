//
//  InsertionSort.cpp
//  Algorithms
//
//  Created by Anton Kovalchuk on 11/01/2020.
//  Copyright © 2020 Anton Kovalchuk. All rights reserved.
//

#include "InsertionSort.hpp"

/// Order of growth is Θ(n^2)
/// Loop invariant is A[0..j-1]. It's a sorted subarray.
void InsertionSort::calculate(int *array, int size)
{
    for (int insertionElementIndex = 1; insertionElementIndex < size; ++insertionElementIndex)
    {
        int insertionElement = array[insertionElementIndex];
        int sortedHandIndex = insertionElementIndex - 1;
        
        while (sortedHandIndex >= 0 && array[sortedHandIndex] < insertionElement)
        {
            array[sortedHandIndex + 1] = array[sortedHandIndex]; // shift elements
            --sortedHandIndex;
        }
        array[sortedHandIndex + 1] = insertionElement; // insert element on correct place
    }
}

