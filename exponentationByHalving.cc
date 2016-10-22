#include <iostream>

float exp(float n, int e)
{
    if(e < 0) return exp(1./n, -e);
    if(e == 0) return 1;
    else if(e%2==1) return n*exp(n*n, e/2);
    return exp(n*n, e/2);
}

int main()
{
    int n, e;
    while(std::cin >> n >> e)
    {
        std::cout << n <<"^"<< e << " = " <<exp(n, e) << std::endl;
    }
}
