#include "utils.cc"

void bubbleSort(int array[], int length)
{
    bool sorted = false;
    while(not sorted)
    {
        sorted = true;
        for(int i = 1; i < length; ++i)
            if(array[i-1] > array[i])
            {
                swap(array, i-1, i);
                sorted = false;
            }
    }
}

int main()
{
    int n;
    std::cin >> n;
    int array[n];
    readArray(array, n);
    bubbleSort(array, n);
    printArray(array, n);

}

