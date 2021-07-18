#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int i = -1;
    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string &word : msg)
    {

        ++i;

        cout << word << " ";
    }
    cout << endl;
}