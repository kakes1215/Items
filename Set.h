#ifndef SET_H
#define SET_H

#include <vector>

template <class T>

class Set
{
public:
    int add(T item);
    int remove(T item);
    int size();
    bool findItem(T item);
    T *getArray(T item);

private:
    vector<T> set;
};
#endif