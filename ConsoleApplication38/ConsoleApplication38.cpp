﻿#include <iostream>
#include <set>
using namespace std;


int main()
{
    set<int> Tree;

    Tree.insert(14);
    Tree.insert(10);
    Tree.insert(9);
    Tree.insert(27);
    Tree.insert(21);

    cout << "All tree elements:"<<endl;
    for (const int& elements : Tree)
    {
        cout << elements << endl;
    }

    Tree.erase(10);
    Tree.erase(27);

    cout << "\nTree elements after removal:"<<endl;
    for (const int& elements : Tree)
    {
        cout << elements << endl;
    }

    return 0;
}