#include <iostream>
#include "InsertionSortRecursive.hpp"
#include "InsertionSort.hpp"
#include "Task2_3_7.hpp"
#include "MergeSort.hpp"
#include "FindMaximumSubarray.hpp"

using namespace std;

void testInsertionSortRecursive()
{
    const int size = 10;
    
    int A[size] = {6,4,5,3,7,8,1,2,0,9};
    
    InsertionSortRecursive::calculate(A, size);
    
    for (int i = 0; i < size; ++i)
    {
        cout << A[i] << " ";
    }
    
    cout << "\n";
}

void testInsertionSort()
{
    const int size = 10;
    
    int A[size] = {6,4,5,3,7,8,1,2,0,9};
    
    InsertionSort::calculate(A, size);
    
    for (int i = 0; i < size; ++i)
    {
        cout << A[i] << " ";
    }
    
    cout << "\n";
}

void testMergeSort()
{
    const int size = 8;
    
    int A[size] = {2,4,5,7,1,2,3,6};
    
    MergeSort::calculate(A, 0, size - 1);
    
    for (int i = 0; i < size; ++i)
    {
        cout << A[i] << " ";
    }
    
    cout << "\n";
}

void test2_3_7()
{
    const int size = 10;
    
    int A[size] = {6,4,5,3,7,8,1,2,0,9};
    
    bool result = Task2_3_7::calculate(A, size, 100);
    
    for (int i = 0; i < size; ++i)
    {
        cout << A[i] << " ";
    }
    
    cout << "\n";
    
    cout << "result=" << (result ? "yes" : "no") << "\n";
}

void testFindMaximumSubarray()
{
    const int size = 16;
    
    int A[size] = {13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
    
    auto result = FindMaximumSubarray::calculate(A, 0, size-1);
    
    cout  << "leftIndex=" << get<LeftIndex>(result) << " rightIndex=" << get<RightIndex>(result) << " Sum=" << get<Sum>(result) << "\n";
}

int main()
{
    //testInsertionSort();
    //testInsertionSortRecursive();
    //test2_3_7();
    //testMergeSort();
    testFindMaximumSubarray();
    
    return 0;
}


int search(int *arr, int size, int x)
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

void addingBinaryNumbers(int *A, int *B, int *C, int size)
{
    int carry = 0;
    
    for (int i = size; i >= 0; --i)
    {
        C[i] = (A[i] + B[i] + carry) % 2;
        
        if (((A[i] + B[i] + carry) % 2) >= 2)
        {
            carry = 1;
        }
        else
        {
            carry = 0;
        }
    }
    C[0] = carry;
}
