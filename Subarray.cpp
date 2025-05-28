// 📘 Definition:
// A subarray is a contiguous (i.e., unbroken) part of the array. For an array of size n, the total number of subarrays is:


// n(n+1)/2
 

 
// ✅ Given Array:
// [3, 4, -5, 8, -12, 7, 6, -2]
// Size n = 8, so total subarrays:

// 8⋅(8+1)/2 ​ = 72 / 2 
// =36

// 🧾 All 36 Subarrays:
// Let’s list them out by increasing length:

// Length 1:
// [3]

// [4]

// [-5]

// [8]

// [-12]

// [7]

// [6]

// [-2]

// Length 2:
// [3, 4]

// [4, -5]

// [-5, 8]

// [8, -12]

// [-12, 7]

// [7, 6]

// [6, -2]

// Length 3:
// [3, 4, -5]

// [4, -5, 8]

// [-5, 8, -12]

// [8, -12, 7]

// [-12, 7, 6]

// [7, 6, -2]

// Length 4:
// [3, 4, -5, 8]

// [4, -5, 8, -12]

// [-5, 8, -12, 7]

// [8, -12, 7, 6]

// [-12, 7, 6, -2]

// Length 5:
// [3, 4, -5, 8, -12]

// [4, -5, 8, -12, 7]

// [-5, 8, -12, 7, 6]

// [8, -12, 7, 6, -2]

// Length 6:
// [3, 4, -5, 8, -12, 7]

// [4, -5, 8, -12, 7, 6]

// [-5, 8, -12, 7, 6, -2]

// Length 7:
// [3, 4, -5, 8, -12, 7, 6]

// [4, -5, 8, -12, 7, 6, -2]

// Length 8:
// [3, 4, -5, 8, -12, 7, 6, -2]



#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {3, 4, -5, 8, -12, 7, 6, -2};
    int n = arr.size();

    cout << "All subarrays:\n";
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            cout << "[ ";
            for (int i = start; i <= end; i++) {
                cout << arr[i] << " ";
            }
            cout << "]\n";
        }
    }

    return 0;
}
