#include <iostream>

using namespace std;

int main() {

    string element;
    cout << "Please enter the element name: ";
    cin >> element;

    if (element == "Helium") {
      cout << "Symbol: He" << endl;
    } else {
      if (element == "Hydrogen") {
	cout << "Symbol: H" << endl;
      }else {
	if (element == "Carbon") { 
	    cout << "Symbol: C" << endl;
	} else {
	    cout << "Invalid element" << endl;
	  }
	}
      }

  return 0;
}
