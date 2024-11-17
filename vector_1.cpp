#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //Initializing a vector
    //First method
    // vector<int> vec ;
    // vec.push_back(1); //Inserts element to the back.
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);

    // Second Method
    vector<int> vec = {1,2,3,4,5};

    //Third Method , For repeated values
    // vector<data_type> vector_name(size, value)
    // vector<int> vec(3,10);

    // creating new vector from existing vector

    vector<int> vec2(vec);

    //vec.pop_back(); // Removes last element
    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl;
    for(int val : vec2)
    {
        cout<< val << " ";
    }

    cout<<endl;
    cout<<vec[2]<<endl;
    cout<<vec.at(2)<<endl;
    cout<<vec.front()<<endl;//Gives first element
    cout<<vec.back()<<endl;//Gives last element

    return 0;
}