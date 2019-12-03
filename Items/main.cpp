//page 992
#include <iostream>
#include "Set.h"
#include "Test.h"

using namespace std;

int main()
{
  //Test Integers
  Test<int> testInts = Test<int>();
  Set<int> intSet = Set<int>();
  intSet = testInts.buildSet("Integer");
  testInts.removeValue(intSet);
  testInts.findItem(intSet);

  //Test Doubles
  Test<double> testDoubles = Test<double>();
  Set<double> doubleSet = Set<double>();
  doubleSet = testDoubles.buildSet("Double");
  testDoubles.removeValue(doubleSet);
  testDoubles.findItem(doubleSet);

  //Test Strings
  Test<string> testString = Test<string>();
  Set<string> stringSet = Set<string>();
  stringSet = testString.buildSet("String");
  testString.removeValue(stringSet);
  testString.findItem(stringSet);

  int *intArray = intSet.getArray();
  delete intArray;
}
