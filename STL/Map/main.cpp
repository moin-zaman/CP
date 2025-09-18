#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main() {
    map <string, int> m;
    map <string, int> :: iterator it;

    m["dipta"] = 43;
    m["arnob"] = 41;
    // m["nabil"] = 42;
    m["arnob"] = 45;

    m.insert(make_pair("nabil", 42));

    it = m.begin();

    cout << it -> first << " " << it -> second << endl;
    // cout << it -> second << endl;

    it++;

    cout << it -> first << " " << it -> second<< endl;
    // cout << it -> second << endl;

    cout << "\nDisplaying maps value using for loop : " << endl;

    for(it = m.begin(); it != m.end(); it++)
    {
        cout << it -> first << " " << it -> second << endl;
    }

}
