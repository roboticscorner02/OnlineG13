#include <iostream>
#include <vector>

void inputvector(std::vector<int> &vect);
void printvector(const std::vector<int> &vect);

int main()
{
    // std::array<std::array<int,3>,3> multidimension_array;

    std::vector<int> vector(5,0); // initialization of 5 elements each by 0
    std::cout << "Input Values: " << std::endl;
    inputvector(vector); // error with no initialization
    printvector(vector);

}

void inputvector(std::vector<int> &vect)
{
    for(auto &element : vect)
    {
        std::cin >> element;
    }
}

void printvector(const std::vector<int> &vect)
{
    for(auto element : vect)
    {
        std::cout << element << " ";
    }
}