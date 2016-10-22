#include <math.h>
#include <iostream>
#include <vector>

std::vector<int> sieve(int n)
{
    std::vector<int> v1(n-2),v2(0);
    for(int i = 0; i < n-1; ++i)
        v1[i] = i+2;

    while(v1[0] < sqrt(n))
    {
        v2.push_back(v1[0]);
        for(int i = 0; i < v1.size(); ++i)
        {
            if(v1[i]%v2.back() == 0)
                v1.erase(v1.begin() + i);
        }
    }
    std::vector<int> ret(v1.size() + v2.size());
    for(int i = 0; i < v2.size(); ++i)
        ret[i] = v2[i];
    for(int i = 0; i < v1.size(); ++i)
        ret[i + v2.size()] = v1[i];
    //v2.insert(v2.end(), v1.begin(), v1.end());
    return ret;
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> v = sieve(n);
    for(int i = 0; i < v.size(); ++i)
        std::cout << v[i] << " ";
}
