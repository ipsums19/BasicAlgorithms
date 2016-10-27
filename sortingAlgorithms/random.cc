#include<iostream>
#include<stdlib.h>

int main()
{
    std::cout << 10000 <<"  ";
    for(int i = 0; i < 10000; ++i)
        std::cout << rand() % 100000 <<" ";
}
