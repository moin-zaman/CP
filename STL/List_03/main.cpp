#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main()
{
//    list <int> myList (4);
    list <int> myList (4,2);
    list <int> :: iterator it;

    for(it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << "\t";
    }


}
