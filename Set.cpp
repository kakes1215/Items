#include <iostream>
#include <vector>
#include "Set.h"

using namespace std;

template <class T>
int Set<T>::add(T item)
{
    if (find(set.begin(), set.end(), item) == set.end())
    {
        cout << "The item " << item << " has been added to the set." << endl;
        set.push_back(item);
        return 0;
    }
    cout << "Item already exists in this set." << endl;
    return -1;
}

template <class T>
int Set<T>::remove(T item)
{
    if (find(set.begin(), set.end(), item) != set.end())
    {
        cout << "Item " << item << " is removed from the set" << endl;
        set.erase(remove(set.begin(), set.end(), item), set.end());
        return 0;
    }
    cout << "Item does not exist in this set." << endl;
    return -1;
}

template <class T>
int Set<T>::size()
{
    return set.size();
}

template <class T>
bool Set<T>::findItem(T item)
{
    if (find(set.begin(), set.end(), item) != set.end())
    {
        cout << "The item was found in this set!" << endl;
        return true;
    }

    cout << "Item does not exist in this set" << endl;
    return false;
}

template <class T>
T *Set<T>::getArray(T item)
{
    T *newArray = new T[set.size()];
    for (int i = 0; i < set.size(); ++i)
    {
        newArray[i] = set[i];
    }
    return newArray;
}
