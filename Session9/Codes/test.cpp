#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <string>
using namespace std;

int main()
{
    std::array<int,5> list= {100,1,2,50,17};
    std::for_each(list.begin(),list.end(),[](int &element) ->void
    {
        element *=2;
    });
    for(auto element : list)
    {
        std::cout << element << std::endl;
    }

}