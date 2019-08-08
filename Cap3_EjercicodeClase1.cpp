#include <iostream>
#include <string>
#include "ArrayBag.h"
using namespace std;
void displayBag(ArrayBag<string>& bag) {
	cout << "The bag contains " << bag.getCurrentSize()
		<< " items:" << endl;
	vector<string> bagItems = bag.toVector();

	int numberOfEntries = (int)bagItems.size();
	for (int i = 0; i < numberOfEntries; i++) {
		cout << bagItems[i] << " ";
	}
	cout << endl << endl;
}
void bagTester(ArrayBag<string>& bag) {
	cout << "isEmpty: returns " << bag.isEmpty()
		<< "; should be 1 (true)" << endl;
	displayBag(bag);
	string items[] = { "one", "two", "three", "four", "five", "one" };
	cout << "Add 6 items to the bag: " << endl;
	for (int i = 0; i < 6; i++) {
		bag.add(items[i]);
	}
	displayBag(bag);
		cout << "isEmpty: returns " << bag.isEmpty() << "; should be 0 (false)" << endl;
	cout << "getCurrentSize: returns " << bag.getCurrentSize() << "; should be 6" << endl;
	cout << "Try to add another entry: add(\"extra\") returns " << bag.add("extra") << endl;
}

int main() {
	ArrayBag<string> bag;
	cout << "Testing the Array-Based Bag:" << endl;
	cout << "The initial bag is empty." << endl;
	bagTester(bag);
	cout << "All done!" << endl;
	return 0;
}
/*
int main() {
	ArrayBag<int> bagInt;
	int x = 18;
	int found;
	int i, num;
	for (i = 0; i < bagInt.getMaxItems(); i++) {
		cout << "Entre un numero entero: ";
		cin >> num;
		bagInt.add(num);
	}

	cout << "El contenido del bag: ";
	for (i = 0; i < bagInt.getMaxItems(); i++) {
		cout << bagInt.getElement(i) << endl;
	}
	x = 18;
	bagInt.remove(x);
	cout << "El contenido del bag: ";
	for (i = 0; i < bagInt.getCurrentSize(); i++) {
		cout << bagInt.getElement(i) << endl;
	}
	x = 36;
	if (bagInt.contains(x) == true)
		cout << "El elemento" << x << " esta dentro del arreglo\n";
	else
		cout << "El elemento" << x << " no esta dentro del arreglo\n";
	x = 20;
	found = bagInt.getFrequencyOf(x);
	if (found == -1) {
		cout << "El elemento " << x << " no esta dento del arreglo\n";
	}
	else {
		cout << "El elemento" << x << " esta" << found << " en el arreglo" << endl;
	}
	system("pause");
	return 0;
}
*/