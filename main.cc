#include <iostream>
#include <vector>
#include <string>
#include "actor/actor.h"

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    Actor* potion = new Actor("Bob");

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}