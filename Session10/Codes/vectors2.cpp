#include <iostream>
#include <vector>

void printvector(const std::vector<int> &vect);

int main()
{
    std::vector<int> vector(5,0); // initialization of 5 elements each by 0
    for(int i = 0; i<vector.size(); i++)
    {
        vector[i] = 7;
    }
    printvector(vector);
    for(auto it = vector.begin(); it != vector.end(); ++it)
    {
       *it = 8;
    }
    printvector(vector);
    for(auto &element : vector)
    {
        element = 9;
    }
    printvector(vector);

    std::vector<int> vector2;
    vector2.assign(vector.begin(),vector.end());
    printvector(vector2);
}

void printvector(const std::vector<int> &vect)
{
    for(auto element : vect)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

