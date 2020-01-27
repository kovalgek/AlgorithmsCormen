//
//  FindMaximumSubarray.cpp
//  Algorithms
//
//  Created by Anton Kovalchuk on 26/01/2020.
//  Copyright © 2020 Anton Kovalchuk. All rights reserved.
//

#include "FindMaximumSubarray.hpp"
#include <iostream>

ThreeIntTuple FindMaximumSubarray::findMaxCrossingSubarray(int *array, int low, int mid, int high)
{
    int maxLeft = mid;
    int leftSum = -INT_MAX;
    int sum = 0;
    
    for(int i = mid; i >= low; --i)
    {
        sum += array[i];
        if(sum > leftSum)
        {
            leftSum = sum;
            maxLeft = i;
        }
    }
    
    int maxRight = mid + 1;
    int rightSum = -INT_MAX;
    sum = 0;
    
    for(int j = mid + 1; j <= high; ++j)
    {
        sum += array[j];
        if(sum > rightSum)
        {
            rightSum = sum;
            maxRight = j;
        }
    }
    
    return std::make_tuple(maxLeft, maxRight, leftSum + rightSum);
}

ThreeIntTuple FindMaximumSubarray::calculate(int *array, int low, int high)
{
    if(low == high)
    {
        return std::make_tuple(low, high, array[low]);
    }
    
    int mid = (low + high) / 2;
    
    auto leftTuple = calculate(array, low, mid);
    auto rightTuple = calculate(array, mid + 1, high);
    auto crossingTuple = findMaxCrossingSubarray(array, low, mid, high);
    
    if (std::get<Sum>(leftTuple) >= std::get<Sum>(rightTuple) &&
        std::get<Sum>(leftTuple) >= std::get<Sum>(crossingTuple))
    {
        return leftTuple;
    }
    else if (std::get<Sum>(rightTuple) >= std::get<Sum>(leftTuple) &&
             std::get<Sum>(rightTuple) >= std::get<Sum>(crossingTuple))
    {
        return rightTuple;
    }
    
    return crossingTuple;
}
