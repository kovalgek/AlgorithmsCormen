//
//  FindMaximumSubarray.hpp
//  Algorithms
//
//  Created by Anton Kovalchuk on 26/01/2020.
//  Copyright © 2020 Anton Kovalchuk. All rights reserved.
//

#ifndef FindMaximumSubarray_hpp
#define FindMaximumSubarray_hpp

#include <stdio.h>
#include <tuple>

enum ThreeIntTupleEnum
{
    LeftIndex,
    RightIndex,
    Sum
};

typedef std::tuple<int, int, int> ThreeIntTuple;

class FindMaximumSubarray
{
    static ThreeIntTuple findMaxCrossingSubarray(int *array, int low, int mid, int high);
public:
    static ThreeIntTuple calculate(int *array, int low, int high);
};

#endif /* FindMaximumSubarray_hpp */
