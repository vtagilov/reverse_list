#include <iostream>
#include <list>
using namespace std;
int main()
{
    list <char> l;

    char t[2];
    while (cin)
    {
        cin.get(t, 2);
        l.push_back(*t);
    }

    for (int i = l.size(); i != 0; i--)
    {
        cout << l.back();
        l.pop_back();
    }
}