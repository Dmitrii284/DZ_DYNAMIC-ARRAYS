#include <iostream>
#include <cstdlib>  // arr[i] = rand() % (10 + 1 - 1) + 1; // [1 ...10] Случайные числа  массива
#include <ctime> //srand(time(NULL)); Случайные числа  массива
#include <algorithm> // функция  stor  Быстрая сортировка std::sort(arr, arr + size);  
// функцию swap Сортировка через сравнениемассивов std::swap(arr[j], arr[j + 1]);

	//Task 1
template <typename T>
void fill_arr(T arr[], const int length, T max, T min) {	
	srand(time(NULL));
	for(int i =0;i<length;i++)
	arr[i] = rand() % (max - min) + min;
}
template <typename T>
void show_mass(T* arr, const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << *(arr + i) << ", ";
	std::cout << "\b\b]\n";
}
//Task 2

void resize_arr(int *arr, int size1, int size2) {
	if (size2 <= 0)
		return;
		int	*tmp = new int [size1 = size2];
		for (int i = 0; i < size1; i++)
			tmp[i] = arr[i];
		    delete[] arr;
			arr = tmp;
}


int main() {
	setlocale(LC_ALL, "Rus");
	//Task 1
	int n, m;
	/*std::cout << "Inter the saize arrays ->";
	std::cin >> n >> m;
	int* A = new int[n];
	int* B = new int[m];
		
	std::cout << "\nA array: \n";
	fill_arr(A, n, 10, 47);
	std::cout << "\n\n";
	show_mass(A, n);
	std::cout << "\nB array: \n";
	fill_arr(B, m, 30, 95);
	std::cout << "\n";
	show_mass(B, m);
	std::cout << std::endl;

	int* C = new int[m + m];
	for (int i = 0; i < n; i++)
		C[i] = A[i];
	for (int i = n; i < n + m; i++)
		C[i] = B[i - n];

	std::cout << "C array: \n";
	show_mass(C, n + m);
	delete[] A;
	delete[] B;*/

	//Task 2
	std::cout << "Enter the Primary saize array ->";
	std::cin >> n>>m;
	int* array = new int[n];
	
	std::cout << "\nD array: \n";
	fill_arr(array, n, 10, 47);
	std::cout << "\n";
	show_mass(array, n);
	std::cout << "\n";

	std::cout << "Enter the change in the length of the second array ->";
	std::cin >> m;

	std::cout << "Outputting data to an array: \n";
	
	/*resize_arr(D, n, m);
	for(int i = 0;i<size)
	show_mass(D, n);
	*/


	return 0;
}