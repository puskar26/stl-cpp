#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec ;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    //vec.pop_back();
// cout<<vec.size()<<endl;
// cout<<vec.capacity()<<endl;
for(int val : vec)
{
    cout<< val << " ";
}

cout<<endl;
cout<<vec[2]<<endl;
cout<<vec.at(2)<<endl;

return 0;
}