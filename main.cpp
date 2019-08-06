#include <iostream>
#include <string>
#include "ArrayBag.h"
using namespace std;

int main()
{
ArrayBag<string> bag;
cout << "Testing the Array-Based Bag:" << endl;
cout << "The initial bag is empty." << endl;
bagTester(bag);
cout << "All done!" << endl;
return 0;
} // end main