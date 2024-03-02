#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> list {50,70,20,35,120,90};
    std::sort(list.begin(),list.end());
    for(auto element : list)
    {
        std::cout << " " << element;
    }

} 