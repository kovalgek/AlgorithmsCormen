//
//  SelectionSort.cpp
//  Algorithms
//
//  Created by Anton Kovalchuk on 11/01/2020.
//  Copyright © 2020 Anton Kovalchuk. All rights reserved.
//

#include "SelectionSort.hpp"

/// loop invariant is
/// A[0..i-1] is consist of smallest elemnts in a sorted order
/// order of growth is Θ(n^2)
/// You can run loop (n-1) times because after (n-1) steps at n position will be the biggests element
void SelectionSort::calculate(int *array, int size)
{
    for (int index = 0; index < size - 1; ++index)
    {
        int minIndex = index;
        for(int subarrayIndex = index + 1; subarrayIndex < size; ++subarrayIndex)
        {
            if(array[subarrayIndex] < array[minIndex])
            {
                minIndex = subarrayIndex;
            }
        }
        int temp = array[minIndex];
        array[minIndex] = array[index];
        array[index] = temp;
    }
}
