#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    list <float> myList;
    list <float> :: iterator it;

    myList.push_back(10);
    myList.push_back(15);
    myList.push_front(5);
    myList.push_front(20);
    myList.push_back(-1);

    for(it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << "\t";
    }

    puts("");
}
