#include <iostream>
using namespace std;

int targetElement(int arr[], int target, int length) {
    int start = 0;
    int end = length - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        // Left half is sorted
        if (arr[start] <= arr[mid]) {
            if (target >= arr[start] && target <= arr[mid]) {
                end = mid - 1; // search in left half
            } else {
                start = mid + 1; // search in right half
            }
        } 
        // Right half is sorted
        else {
            if (target >= arr[mid] && target <= arr[end]) {
                start = mid + 1; // search in right half
            } else {
                end = mid - 1; // search in left half
            }
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 12, 2, 4, 6, 8};
    int res = targetElement(arr, 8, 6);
    cout << "Res: " << res;
    return 0;
}
