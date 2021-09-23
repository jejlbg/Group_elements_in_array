#include <iostream>
#include <sstream>
using namespace std;

void sortArray(int arr[], int arrSize) {
	for (int i = 0; i < arrSize - 1; i++) {
		if (arr[i] != arr[i + 1]) {
			for (int j = arrSize - 1; j > i + 1; j--) {
				if (arr[i] == arr[j]) {
					//shifts elements from i + 2 to j and inserts arr[i] afterwards into arr[i + 1]
					for (int k = j; k > i + 1; k--) {
						arr[k] = arr[k - 1];
					}
					arr[i + 1] = arr[i];
				}
			}
		}
	}
}

int main()
{
	int arrSize = -1;

	while (arrSize > 1000000000 || arrSize < 0) {
		cout << "How many elements do you want to be sorted (min. 0, max 1000000000): ";
		cin >> arrSize;
	}

	int* arr{ new int[arrSize] {} };

	ostringstream oss;
	oss << "Enter " << arrSize << " numbers (seperated with enter): ";

	for (int i = 0; i < arrSize; i++) {
		cout << oss.str();
		cin >> arr[i];
	}

	cout << "Your UNSORTED array: ";

	for (int j = 0; j < arrSize; j++) {
		ostringstream oss;
		oss << arr[j] << " ";
		cout << oss.str();
	}

	sortArray(arr, arrSize);

	cout << "\nYour SORTED   array: ";

	for (int k = 0; k < arrSize; k++) {
		ostringstream oss;
		oss << arr[k] << " ";
		cout << oss.str();
	}

	return 0;
}



