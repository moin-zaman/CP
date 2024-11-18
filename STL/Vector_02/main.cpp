#include <iostream>
#include <vector>
#include<iterator>

using namespace std;

int main()
{
    vector <int> vec(3, 5);

    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << "\n";

    vec.push_back(2);
    vec.push_back(4);

    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << "\n";

    cout << vec.size() << endl;




}
