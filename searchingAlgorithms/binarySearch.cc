#include "mergeSort.cc"

bool auxBinary(int search, std::vector<int> v, int start, int end)
{
    if(start > end) return false;
    int mid = start + (end - start)/2;
    if(v[mid] == search) return true;
    else if(v[mid] > search) return auxBinary(search, v, start, mid-1);
    else return auxBinary(search, v, mid+1, end);

}

bool binarySearch(int search, std::vector<int> v)
{
    return auxBinary(search, v, 0, v.size()-1);
}

//int main()
//{
    //int n;
    //std::cin >> n;
    //std::vector<int> v(n);
    //for(int i = 0; i < n; ++i)
        //std::cin >> v[i];
    //mergeSort(v, 0, n-1);
    //int search;
    //while(std::cin >> search)
    //{
        //std::cout << search <<" " <<binarySearch(search, v) << std::endl;
    //}
//}
