#include <iostream>
#include <vector>

void printvector(const std::vector<int> &vect);

int main()
{
    std::vector<int> vector(5,0);
    for(int i = 0; i < vector.size(); i++)
    {
        vector[i] = 7;
    }
    printvector(vector);
    for(auto it = vector.begin(); it != vector.end(); ++it)
    {
        *it = 8;
        // std::cout << it << std::endl;
    }
    printvector(vector);
    for(auto &element : vector)
    {
        element = 9;
    }
    printvector(vector);
}

void printvector(const std::vector<int> &vect)
{
    for(auto element : vect)
    {
        std::cout << element << " ";
    }
}