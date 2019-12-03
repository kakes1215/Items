#include <iostream>
#include "Test.h"
#include "Set.h"

template <class T>
Test<T>::Test() {}

template <class T>
Set<T> Test<T>::buildSet(string valueType)
{
    string userInput;
    Set<T> newSet;
    while (userInput != "Q" && userInput != "q")
    {
        incomingSet.printSet();
        cout << "Enter a " << valueType << "for the set (Enter Q to quit): ";
        cin >> userInput;

        if (userInput != "Q" && userInput != "q")
        {
            newSet.add(userInput);
        }
    }
    return newSet;
}

template <class T>
void Test<T>::removeValue(Set<T> &incomingSet)
{
    while (userInput != "Q" && userInput != "q")
    {
        incomingSet.printSet();
        cout << "Enter a item to remove from the set: " << endl;
        cout << " (Enter Q to quit): ";
        cin >> userInput;

        if (userInput != "Q" && userInput != "q")
        {
            incomingSet.remove(userInput);
        }
    }
}

template <class T>
void Test<T>::findItem(Set<T> &incomingSet)
{
    while (userInput != "Q" && userInput != "q")
    {
        incomingSet.printSet();
        cout << "Enter a item to find in the set: " << endl;
        cout << " (Enter Q to quit): ";
        cin >> userInput;

        if (userInput != "Q" && userInput != "q")
        {
            incomingSet.findItem(userInput);
        }
    }
}