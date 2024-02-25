#include <iostream>
#include <array>

int main()
{
    std::array<int,5> arr = {1,2,3,4,5};
    
    //printing using method 1
    for(int i = 0; i<=arr.size()-1; i++) // i= i+1
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    //printing using method 2
    for(auto element : arr)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;


}