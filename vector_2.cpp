#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> vec = {1,2,3,4,5};
// Erase => Changes size of a vector but not capacity
// vec.erase(position)
// position => vec.begin() or vec.begin() + 1,2,3....

// vec.erase(vec.begin()+1); // removes 2
// To erase multiple values
// vec.erase(start,end) => start included but end excluded
vec.erase(vec.begin(), vec.begin()+2); // Removes 1 and 2

// Insert
// vec.insert(position, value)
vec.insert(vec.begin()+2,23);

//Clear => Clears the vector completely
// doesnt change capacity
vec.clear();

// Empty => Checks Whether a vector is empty or not
cout<<"is Empty: "<<vec.empty()<<endl;

for(int val : vec)
{
    cout<<val << " ";
}
// cout<<"Size:"<<vec.size()<<endl;
// cout<<"Capacity:" <<vec.capacity()<<endl;
cout<<endl;
return 0;
}