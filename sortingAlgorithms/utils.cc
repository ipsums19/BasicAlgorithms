#include <iostream>

void printArray(int array[], int length)
{
    for(int i = 0; i < length; ++i)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}


void readArray(int array[], int length)
{
    for(int i = 0; i < length; ++i)
        std::cin >> array[i];
}

void swap(int array[], int x, int y)
{
    int aux = array[x];
    array[x] = array[y];
    array[y] = aux;
}
