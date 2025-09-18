#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main() {

    pair <string, int> p;

    // pair <string, int> p("dipta", 21);

    p = make_pair("dipta", 21);

    // p.first = "dipta";
    // p.second = 21;;

    cout << p.first << " " << p.second << endl;


    // Insert pair value into a vector;

    vector <pair <int, string> > v;
    vector <pair <int, string> > :: iterator it;


    v.push_back(make_pair(21, "dipta"));
    v.push_back(make_pair(22, "nabil"));
    v.push_back(make_pair(20, "arnob"));

    cout << v[0].first << endl;
    cout << v[0].second << endl;

    cout << "Displaying pair value of vector using iterator" << endl;

    for(it = v.begin(); it != v.end(); it++)
    {
        cout << it -> first << " " << it -> second << endl;
    }


}
