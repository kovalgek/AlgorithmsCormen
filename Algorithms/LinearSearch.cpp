//
//  LinearSearch.cpp
//  Algorithms
//
//  Created by Anton Kovalchuk on 11/01/2020.
//  Copyright © 2020 Anton Kovalchuk. All rights reserved.
//

#include "LinearSearch.hpp"

/// Order of growth is Θ(n)
int LinearSearch::calculate(int *arr, int size, int x)
{
    // invariant: no k that k < i and x = arr[k]
    int k = NULL;
    
    for (int i = 0; i < size; ++i)
    {
        if (x == arr[i])
        {
            k = i;
            return k;
        }
    }
    return k;
}
