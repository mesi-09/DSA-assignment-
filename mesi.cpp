//assignment 1
#include <iostream>
using namespace std;

int findSmallest(int arr[], int n) {
    int smallest = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main() {
    int arr[] = {105, 57, 27, 88, 155};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Smallest element: " << findSmallest(arr, n) << endl;
    return 0;
}





#include <iostream>
#include <limits.h>
using namespace std;

void findSecondAndThirdLargest(int arr[], int n) {
    if (n < 3) {
        cout << "Array must contain at least 3 elements." << endl;
        return;
    }

    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        } else if(arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }

    cout << "Second largest: " << second << endl;
    cout << "Third largest: " << third << endl;
}

int main() {
    int arr[] = {120, 45, 150, 55, 78, 49};
    int n = sizeof(arr)/sizeof(arr[0]);
    findSecondAndThirdLargest(arr, n);
    return 0;
}
//assignment 2
#include <iostream>
using namespace std;

void bubbleSort(int* arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*arr[j] > *arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int data[] = {40, 10, 30, 20};
    int* ptrArr[4];

    // Initialize pointer array
    for (int i = 0; i < 4; ++i) {
        ptrArr[i] = &data[i];
    }

    bubbleSort(ptrArr, 4);

    cout << "Sorted using pointer bubble sort: ";
    for (int i = 0; i < 4; ++i) {
        cout << *ptrArr[i] << " ";
    }
    cout << endl;

    return 0;
}


//Selection sort
#include <iostream>
using namespace std;

void selectionSort(int* arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (*arr[j] < *arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int data[] = {50, 10, 40, 20, 30};
    int* ptrArr[5];

    // Initialize pointer array
    for (int i = 0; i < 5; ++i) {
        ptrArr[i] = &data[i];
    }

    selectionSort(ptrArr, 5);

    cout << "Sorted using pointer selection sort: ";
    for (int i = 0; i < 5; ++i) {
        cout << *ptrArr[i] << " ";
    }
    cout << endl;

    return 0;
}



QuickSort 

#include <iostream>
using namespace std;

int partition(int* arr[], int low, int high) {
    int* pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (*arr[j] < *pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int* arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int data[] = {70, 10, 50, 30, 20, 60, 40};
    int* ptrArr[7];

    for (int i = 0; i < 7; ++i) {
        ptrArr[i] = &data[i];
    }

    quickSort(ptrArr, 0, 6);

    cout << "Sorted using pointer quick sort: ";
    for (int i = 0; i < 7; ++i) {
        cout << *ptrArr[i] << " ";
    }
    cout << endl;

    return 0;
}



//assignment 3
#include <iostream>
using namespace std;

int iterativeBinarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; 
        }
        if (arr[mid] < target) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = iterativeBinarySearch(arr, n, target);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int recursiveBinarySearch(int arr[], int low, int high, int target) {
    if (low > high) {
        return -1; 
    }

    int mid = low + (high - low) / 2;
    if (arr[mid] == target) {
        return mid; 
    }

    if (arr[mid] < target) {
        return recursiveBinarySearch(arr, mid + 1, high, target); 
    } else {
        return recursiveBinarySearch(arr, low, mid - 1, target); 
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = recursiveBinarySearch(arr, 0, n - 1, target);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
//assignment 4
#include <iostream>
using namespace std;

int ternarySearch(int arr[], int low, int high, int target) {
    if (high >= low) {
        // Calculate mid points
        int mid1 = low + (high - low) / 3;
        int mid2 = high - (high - low) / 3;

        // Check the mid points
        if (arr[mid1] == target) return mid1;
        if (arr[mid2] == target) return mid2;

        // Narrow down to the relevant section
        if (target < arr[mid1]) {
            return ternarySearch(arr, low, mid1 - 1, target);
        } else if (target > arr[mid2]) {
            return ternarySearch(arr, mid2 + 1, high, target);
        } else {
            return ternarySearch(arr, mid1 + 1, mid2 - 1, target);
        }
    }
    return -1;  
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    int result = ternarySearch(arr, 0, n - 1, target);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int low, int high, int target) {
    while (low <= high && target >= arr[low] && target <= arr[high]) {
        // Estimate probe position using the formula
        int pos = low + ((target - arr[low]) * (high - low)) / (arr[high] - arr[low]);

        // Check if target is found at probe position
        if (arr[pos] == target) return pos;
        if (arr[pos] < target) low = pos + 1;  // Search the right part
        else high = pos - 1;  // Search the left part
    }
    return -1;  // Target not found
}

int main() {
    int arr[] = {10, 12, 20, 32, 35, 40, 45, 50, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 32;

    int result = interpolationSearch(arr, 0, n - 1, target);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}





