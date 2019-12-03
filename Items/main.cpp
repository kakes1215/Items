//page 992
#include <iostream>
#include "Set.h"
using namespace std;

int handleMenu();

int main()
{
  int loopNum = 1;
  while (true)
  {
    Set<int> intSet = Set<int>();
    int userChoice = handleMenu();
    if (loopNum > 1)
    {
      intSet.printSet();
    }

    switch (userChoice)
    {
    case 1:
      int value;
      cout << "Enter an integer to add: ";
      cin >> value;

      while (!cin)
      {
        cout << "That was no integer! Please enter an integer: ";
        cin.clear();
        cin.ignore();
        cin >> value;
      }

    case 2:
      int valueToRemove;
      cout << "Enter an integer to remove: ";
      cin >> valueToRemove;

      while (!cin)
      {
        cout << "That was no integer! Please enter an integer: ";
        cin.clear();
        cin.ignore();
        cin >> value;
      }
    }
  }
  int userInt;

  intSet = testInts.buildSet("Integer");
  testInts.removeValue(intSet);
  testInts.findItem(intSet);
  int *intArray = intSet.getArray();
  delete intArray;

  //Test Doubles
  //   Set<double> doubleSet = Set<double>();
  //   doubleSet = testDoubles.buildSet("Double");
  //   testDoubles.removeValue(doubleSet);
  //   testDoubles.findItem(doubleSet);
  //   double *doubleArray = doubleSet.getArray();
  //   delete doubleArray;

  //   //Test Strings
  //   Test<string> testString = Test<string>();
  //   Set<string> stringSet = Set<string>();
  //   stringSet = testString.buildSet("String");
  //   testString.removeValue(stringSet);
  //   testString.findItem(stringSet);
  //   string *stringArray = stringSet.getArray();
  //   delete stringArray;
}

int handleMenu()
{
  int choice;
  cout << "\n ******** MENU ********** " << endl;
  cout << "\n 1) Add an Item" << endl;
  cout << "2) Remove an Item" << endl;
  cout << "3) Get the Size of the Set" << endl;
  cout << "4) Find Item in the Set" << endl;
  cout << "5) Get Array of the Items" << endl
       << endl;

  cout << "Enter your choice: ";
  cin >> choice;

  while (!cin)
  {
    cout << "That was no integer! Please enter an integer: ";
    cin.clear();
    cin.ignore();
    cin >> choice;
  }

  return choice;
}
