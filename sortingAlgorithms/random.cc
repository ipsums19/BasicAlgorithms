#include<iostream>
#include<stdlib.h>

int main()
{
    std::cout << 1000 <<"  ";
    for(int i = 0; i < 1000; ++i)
        std::cout << rand() % 10000 <<" ";
}
