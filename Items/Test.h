#ifndef TEST_H
#define TEST_H
#include <iostream>
#include "Set.h"

template <class T>
class Test
{
public:
    Test();
    Set<T> buildSet(std::string valueType);
    void removeValue(Set<T> &incomingSet);
    void findItem(Set<T> &incomingSet);
};
#endif