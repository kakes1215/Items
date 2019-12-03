//page 992
#include <iostream>
#include "Set.h"
using namespace std;

int handleMenu();
void checkIsInt(int& intValue);

int main()
{
  handleMenu();
  int loopNum = 1;
  while (true)
  {
    Set<int> intSet;
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
      checkIsInt(value);
      intSet.add(value);
      break;
      
    case 2:
      int valueToRemove;
      cout << "Enter an integer to remove: ";
      cin >> valueToRemove;
      checkIsInt(valueToRemove);
      intSet.remove(valueToRemove);
      break;

    case 3:
      cout << "The size of the Set is: " << intSet.size() << endl;
      break;

    case 4:
      int itemToFind;
      cout << "Enter an Int to Find in the Set: ";
      cin >> itemToFind;
      checkIsInt(itemToFind);
      intSet.findItem(itemToFind);
      break;

    case 5:
      cout << "Printing Array...." << endl;
      int *intArray = intSet.getArray();
      for(int i = 0; i < intSet.size(); i++)
      {
        cout << "Array Item #" << i+1 << ": " << intArray[i] << endl;
      }
      delete intArray;
      break;
    }
  }

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
  cout << "\n1) Add an Item" << endl;
  cout << "2) Remove an Item" << endl;
  cout << "3) Get the Size of the Set" << endl;
  cout << "4) Find Item in the Set" << endl;
  cout << "5) Get Array of the Items" << endl
       << endl;

  cout << "Enter your choice: ";
  cin >> choice;

  checkIsInt(choice);
  return choice;
}

void checkIsInt(int& intValue)
{
  while (!cin)
  {
    cout << "Please enter an integer: ";
    cin.clear();
    cin.ignore();
    cin >> intValue;
  }
}
