
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {

    int ar[5] = {5, 2, 1, 6, 3};

    // list <int> myList;

    list <int> myList (ar, ar+5);
    list <int> :: iterator it;

    if(!myList.empty())
    {
        cout << "List is not Empty" << endl;
    }
    else{
        cout << "List is EMPTY" << endl;
    }

    cout << myList.front() << endl; //5
    cout << myList.back() << endl; // 3

    myList.pop_front();
    myList.pop_back();
    myList.pop_back();


    for(it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }



}
