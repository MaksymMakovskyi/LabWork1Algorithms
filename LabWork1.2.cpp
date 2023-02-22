#include <iostream>
#include <cstdlib>
#include <ctime>

#define N 10

void SelectionSort(int arr[]) {
    for (int i = 0; i < N - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < N; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
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
    SelectionSort(arr);
    std::cout << "Sorted Array: ";
    for (int i = 0; i < N; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
