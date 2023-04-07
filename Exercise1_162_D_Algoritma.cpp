//1. Algoritma sangat penting dalam menyelesaikan masalah, karena dengan algoritma yang tepat kita dapat menemukan solusi yang cepat dan akurat untuk menyelesaikan masalah
//2. Dalam algoritma itu terdapat 2 data struktur, struktur data liner dan struktur data non linear
//3. Faktor-faktor yang mempengaruhi efisiensi suatu program algoritma execution time, seamakin dikit waktu yang dibutuhkan semakin efisien program tersebut. Memory usage, semakin dikit memory yang digunakan semakin efisien. Struktur data yang digunakan, struktu yang tepat dapat menemukan solusi dengan cepat
//4. Algoritma yang paling efisien untuk mengurutkan data yang ukurannya kecil adalah insertion sort, karena insertion sort sederhana dan muda dipahami
//5. Algoritma yang telah dipelajari yang masuk dalam quadraatic itu ada insertion sort, bubble sort. Sedangkan yang termasuk kedalam loglinear adalah quicksort


#include <iostream>
using namespace std;

const int MAX_SIZE = 48; 
int arr[MAX_SIZE];


void inputData(int n) {
	cout << "Masukkan " << n << " data:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];

	}
}


void selectionSort(int n) {
	int i, FHmin_index;
	for (int i = 0; i < n; i++) {
		FHmin_index = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[FHmin_index]) {
				FHmin_index = j;
			}
		}
		swap(arr[i], arr[FHmin_index]);
	}
}

void display(int n) {
	cout << "Data yang telah di urutkan" << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {

}
