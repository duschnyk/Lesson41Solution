#include "util.h"
#include "sort.h"
#define SIZE 20

int main() {
	int array[SIZE];

	init(array, SIZE, -100, 100);
	cout << "Array: " << convert(array, SIZE) << endl;

	selected_sort(array, SIZE);
	cout << "Array after: " << convert(array, SIZE) << endl;


	return 0;
}