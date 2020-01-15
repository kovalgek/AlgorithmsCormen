//
//  BinarySearch.cpp
//  Algorithms
//
//  Created by Anton Kovalchuk on 11/01/2020.
//  Copyright © 2020 Anton Kovalchuk. All rights reserved.
//

#include "BinarySearch.hpp"

/// Order of growth is Θ(lg(n))
int BinarySearch::calculate(int *array, int size, int searchingElement)
{
    int leftIndex = 0;
    int rightIndex = size - 1;
    int middleIndex;
    
    do
    {
        middleIndex = (leftIndex + rightIndex) / 2;
        if (searchingElement > array[middleIndex])
        {
            leftIndex = ++middleIndex;
        }
        if (searchingElement < array[middleIndex])
        {
            rightIndex = --middleIndex;
        }
    }
    while (searchingElement != array[middleIndex] && leftIndex < rightIndex);
    
    if (searchingElement == array[middleIndex])
    {
        return middleIndex;
    }
    return NULL;
}
