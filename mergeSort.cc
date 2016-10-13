#include<iostream>
#include<vector>

void merge(std::vector<int> &v, int i, int aux, int j)
{
    int n1 = aux - i + 1;
    int n2 = j - aux;
    std::vector<int> v1(n1),v2(n2);
    for(int k=0; k<n1; ++k)
        v1[k]=v[i + k];
    for(int k=0; k<n2; ++k)
        v2[k]=v[aux + k + 1];

    int k1,k2;
    k1=k2=0;
    while(k1<n1 and k2<n2)
    {
        if(v1[k1] > v2[k2])
        {
            v[k1+k2+i] = v2[k2];
            k2++;
        }
        else{
            v[k1+k2+i] = v1[k1];
            k1++;
        }
    }

    while(k1<n1)
    {
        v[k1+k2+i] = v1[k1];
        k1++;
    }

    while(k2<n2)
    {
        v[k1+k2+i] = v2[k2];
        k2++;
    }

}

void mergeSort(std::vector<int> &v, int i, int j)
{
    int aux = i+(j-i)/2;
    if((j-i) > 1){
        mergeSort(v, aux+1, j);
        mergeSort(v, i, aux);
    }
    if(i<j)
        merge(v, i, aux, j);
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for(int i = 0; i < n; ++i)
        std::cin >> v[i];
    mergeSort(v, 0, n-1);
    for(int i = 0; i < n; ++i)
        std::cout << v[i] <<" ";
    std::cout << std::endl;
}
