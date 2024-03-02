#include <iostream>
#include <array>
#include <algorithm>

int main()
{
    for (int n: {1,2,3,4,5})
    {
        std::cout << n << ' ';
    }
    std::cout << '\n';

    std::array<int,3> nums = {1,2,3};
    for (auto i:nums)
    {
        std::cout << i << ' ';
    }
    std::cout << '\n';
    
    int arr[5] = {2,4,6,8,10};
    std::array<int,5> cpp_array = {70,50,100,15,65};

    std::sort(cpp_array.begin(),cpp_array.end());
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << std::endl;
    }
    
    std::cout << "-----------" << std::endl;

    for (int i = 0; i < cpp_array.size(); i++)
    {
        std::cout << cpp_array[i] << std::endl;
    }

    std::cout << "-----------" << std::endl;
    
    for (int element : cpp_array)
    {
        std::cout << element << std::endl;
    }
    
    std::array<int,5> cpp_array2 = {70,50,100,15,65};
    std::array<int,5> cpp_array3 = {0,0,0,0,0};
    cpp_array2.fill(0);
    for (int element : cpp_array2)
    {
        std::cout << element <<std::endl;
    }
    
    

}