#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    int ar[5] = {5, 2, 1, 6, 3};

    list <int> myList (ar, ar+5);
    list <int> :: iterator it;

    it = find(myList.begin(), myList.end(), 1);

//    it = myList.begin();
//    it++;


    myList.erase(it);



//    if(it == myList.end())
//    {
//        cout << "Not Found" << endl;
//    }
//    else
//    {
//        cout << "Found" << endl;
//    }


    for(it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << "\t";
    }

}
