//
//  InsertionSortRecursive.cpp
//  Algorithms
//
//  Created by Anton Kovalchuk on 11/01/2020.
//  Copyright © 2020 Anton Kovalchuk. All rights reserved.
//

#include "InsertionSortRecursive.hpp"

/**
        / Θ(1), if n <= c
 T(n) = |
        \ T(n - 1) + I(n)     I(n) is amount of time to insert A[n] into sorted array A[0..n-1]
**/

void InsertionSortRecursive::calculate(int *array, int size)
{
    if (size <= 1)
    {
        return;
    }
    calculate(array, size - 1);
    
    int insertedElement = array[size - 1];
    int i = size - 2;
    
    while (i >= 0 && array[i] > insertedElement)
    {
        array[i + 1] = array[i];
        i = i - 1;
    }
    array[i + 1] = insertedElement;
}
