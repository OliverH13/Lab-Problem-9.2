
#include <iostream>

using namespace std;

bool is_sorted_increasing(int int_array[6]);

int main() {

	int int_array[6];

	cout << "Enter integer #0: ";
	cin >> int_array[0];
	cout << "Enter integer #1: ";
	cin >> int_array[1];
	cout << "Enter integer #2: ";
	cin >> int_array[2];
	cout << "Enter integer #3: ";
	cin >> int_array[3];
	cout << "Enter integer #4: ";
	cin >> int_array[4];
	cout << "Enter integer #5: ";
	cin >> int_array[5];

	if (is_sorted_increasing(int_array) == true)
		cout << "The data are increasing";
	else
		cout << "The data are not increasing";


}

bool is_sorted_increasing(int int_array[6]) { 
	if (int_array[0] <= int_array[1] && int_array[1] <= int_array[2] && int_array[2] <= int_array[3] && int_array[3] <= int_array[4] && int_array[4] <= int_array[5])
		return true;
	else return false;
}

