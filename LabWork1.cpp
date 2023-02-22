#include <iostream>
#include <cstdlib>
#include <ctime>

#define N 10

using namespace std;
void InsertionSort(int arr[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    srand(time(NULL));
    int arr[N];
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 100;
    }
    std::cout << "Original Array: ";
    for (int i = 0; i < N; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    InsertionSort(arr,N);
    std::cout << "Sorted Array: ";
    for (int i = 0; i < N; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
