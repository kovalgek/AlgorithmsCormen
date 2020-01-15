#include <iostream>
#include "InsertionSortRecursive.hpp"
#include "InsertionSort.hpp"

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

int main()
{
    testInsertionSort();
    testInsertionSortRecursive();
    
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
