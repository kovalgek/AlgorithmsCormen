//
//  Algorithms.hpp
//  Algorithms
//
//  Created by Anton Kovalchuk on 09/01/2020.
//  Copyright © 2020 Anton Kovalchuk. All rights reserved.
//

#ifndef Algorythms_hpp
#define Algorythms_hpp

#include <stdio.h>

class MergeSort
{
    static void sortArray(int *array, int leftIndex, int rightIndex);
public:
    static void calculate(int *array, int leftIndex, int middleIndex, int rightIndex);
};

#endif /* Algorythms_hpp */
