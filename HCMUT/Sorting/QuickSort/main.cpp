#include <sstream>
#include <iostream>
#include <type_traits>
using namespace std;
template <typename T>
static inline void swap(T* a, T* b)
{
    T tmp = *a;
    *a = *b;
    *b = tmp;
}

template<typename T>
static T* Partition(T* start, T* end)
{
    const T pivot = *start;
    T* j = end;
    T* i = start ;
    do 
    {
        do i++ ;    while(*i < pivot);
        do j-- ;    while(*j > pivot);
        if(i < j)
            swap(i, j);
    }
    while(i<j);
    swap(start, j);
    return j;
}

template<typename T>
static void quicksort(T* start, T* end)
{
    if (start < end)
    {
        T* p = Partition(start, end);
        quicksort(start, p);
        quicksort(p+1, end);
    }
}

int main()
{
    int array[] = { 3, 5, 7, 10 ,12, 14, 15, 13, 1, 2, 9, 6, 4, 8, 11, 16, 17, 18, 20, 19 };
    quicksort<int>(array, array + 20);
    cout << "\n";
    for (int i = 0; i < 20; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\n";
    return 0;
}