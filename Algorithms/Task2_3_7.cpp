//
//  Task2_3_7.cpp
//  Algorithms
//
//  Created by Anton Kovalchuk on 15/01/2020.
//  Copyright © 2020 Anton Kovalchuk. All rights reserved.
//

#include "Task2_3_7.hpp"
#include "MergeSort.hpp"

bool Task2_3_7::calculate(int *S, int size, int x)
{
    MergeSort::calculate(S, 0, size - 1);
    
    int i = 0;
    int j = size - 1;
    
    while (i < j)
    {
        int sum = S[i] + S[j];
        if (sum == x)
        {
            return true;
        }
        else if (sum < x)
        {
            ++i;
        }
        else if (sum > x)
        {
            --j;
        }
    }
    return false;
}
