#include <iostream>
#include <vector>

void inputvector(std::vector<int> &vect);
void printvector(const std::vector<int> &vect);

int main()
{
    std::vector<int> vect(5,0);
    std::cout << "Input Values: " << std::endl;
    inputvector(vect);
    std::cout << "Printing Data: " << std::endl;
    printvector(vect);
    std::cout << "Size: : " << vect.size() << std::endl;
    

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