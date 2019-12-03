#ifndef SET_H
#define SET_H
#include <vector>
using namespace std;

template <class T>
class Set
{
public:
    Set();
    int add(T item);
    int remove(T item);
    int size();
    bool findItem(T item);
    T *getArray();
    void printSet();

private:
    vector<T> set;
};
#endif