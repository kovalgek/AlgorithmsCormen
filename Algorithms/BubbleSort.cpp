//
//  BubbleSort.cpp
//  Algorithms
//
//  Created by Anton Kovalchuk on 11/01/2020.
//  Copyright © 2020 Anton Kovalchuk. All rights reserved.
//

#include "BubbleSort.hpp"

void BubbleSort::calculate(int *array, int size)
{
    bool wasElementsExchange = true;
    int sortedPartIndexShift = 1;
    
    while (wasElementsExchange)
    {
        wasElementsExchange = false;
        
        for (int currentIndex = 0 ; currentIndex < size - sortedPartIndexShift; ++currentIndex)
        {
            if(array[currentIndex] > array[currentIndex + 1])
            {
                int temp = array[currentIndex];
                array[currentIndex] = array[currentIndex + 1];
                array[currentIndex + 1] = temp;
                wasElementsExchange = true;
            }
        }
        
        if(wasElementsExchange)
        {
            ++sortedPartIndexShift;
        }
    }
}
