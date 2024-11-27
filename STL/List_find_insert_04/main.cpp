#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    int ar[5] = {5, 2, 1, 6, 3};

    list <int> myList (ar, ar+5);
    list <int> :: iterator it;

    it = myList.begin();
    it++;
    it++;


    cout << *it << endl;

    for(it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << "\t";
    }

}
