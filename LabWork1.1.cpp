#include <iostream>
#include <cstdlib>
#include <ctime>

#define N 10

void InsertionSort(int arr[]) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    InsertionSort(arr);
    std::cout << "Sorted Array: ";
    for (int i = 0; i < N; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
