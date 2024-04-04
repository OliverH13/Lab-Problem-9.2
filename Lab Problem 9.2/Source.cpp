
#include <iostream>

using namespace std;

bool is_sorted_increasing(int int_array[6]);
bool is_sorted_decreasing(int int_array[6]);
bool has_adjacent_duplicates(int int_array[6]);

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
		cout << "The data are increasing" << endl;
	else
		cout << "The data are not increasing" << endl;

	if (is_sorted_decreasing(int_array) == true)
		cout << "The data are decreasing" << endl;
	else
		cout << "The data are not decreasing" << endl;

	if (has_adjacent_duplicates(int_array) == true)
		cout << "The data has adjacent duplicates" << endl;
	else
		cout << "The data does not have adjacent duplicates" << endl;

}

bool is_sorted_increasing(int int_array[6]) { 
	if (int_array[0] <= int_array[1] && int_array[1] <= int_array[2] && int_array[2] <= int_array[3] && int_array[3] <= int_array[4] && int_array[4] <= int_array[5])
		return true;
	else return false;
}

bool is_sorted_decreasing(int int_array[6]) {
	if (int_array[0] >= int_array[1] && int_array[1] >= int_array[2] && int_array[2] >= int_array[3] && int_array[3] >= int_array[4] && int_array[4] >= int_array[5])
		return true;
	else return false;
}

bool has_adjacent_duplicates(int int_array[6]) {
	if (int_array[0] == int_array[1] || int_array[1] == int_array[2] || int_array[2] == int_array[3] || int_array[3] == int_array[4] || int_array[4] == int_array[5])
		return true;
	else return false;
}