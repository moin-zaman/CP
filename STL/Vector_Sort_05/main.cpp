#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

bool myfunc(int a, int b)
{
    return a > b;
}

int main()
{
    vector <int> vec;
    vector <int> :: iterator it;

    vec.push_back(10);
    vec.push_back(432);
    vec.push_back(32);
    vec.push_back(52);
    vec.push_back(12);
    vec.push_back(50);

    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << "\t";
    }
    puts("");
    puts("");



    sort(vec.begin(), vec.end());
    cout << "After Sorting" << endl << endl;
    cout << "Ascending Order : ";

    for(it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << "\t";
    }
    puts("");





    sort(vec.begin(), vec.end(), myfunc);
    cout << "Descending Order : ";

    for(it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << "\t";
    }
    puts("");





    cout << "Sorting for First 3 Elements : ";
    sort(vec.begin(), vec.begin()+3);

    for(it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << "\t";
    }
    puts("");




}
