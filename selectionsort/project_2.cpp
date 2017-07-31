#include<iostream>
#include<algorithm>

void selectionsort(int array[], int n) {
	int i;
	int j;
	int min;

	for (i = 0; i <= n - 1; ++i) {
		min = 1;
		for (j = i + 1; j <= n; ++j)
			if (array[min] > array[j])
				min = j;
		if (min != 1)
			std::swap(array[min], array[i]);
	}
}
void printarray(int array[], int n) {
	for (int i = 0; i <= n; ++i)
		std::cout << array[i] << " ";
}
int main() {
	int array[] = { 4,8,1,6,7,3 };
	int n = 5;
	selectionsort(array, n);
	printarray(array, n);


}