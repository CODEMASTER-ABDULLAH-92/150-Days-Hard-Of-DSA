// #include <iostream>
// #include <vector>
// using namespace std;

// void printArr(vector<int> &vec)
// {
//     for (int i = 0; i < vec.size(); i++)
//     {
//         cout << vec[i] << " ";
//     }
//     cout << " \n";
// }
// void rotateAnArray(vector<int> &vec)
// {
//     for (int i = 0; i < 5; i++)
//     {
//         int lastIndex = vec[vec.size() - 1];
//         for (int i = vec.size() - 1; i >= 0; i--)
//         {
//             vec[i] = vec[i - 1];
//         }
//         vec[0] = lastIndex;
//         printArr(vec);
//     }
// }


// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     rotateAnArray(vec);
//     // printArr(vec);
//     return 0;
// }



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverse(vector<int>& vec, int start, int end) {
    while (start < end) {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}

void printArr(vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}
void rotateRight(vector<int>& vec, int k) {
    int n = vec.size();
    k = k % n;  // Handle cases where k > n

    // Step 1: Reverse the whole array
    reverse(vec, 0, n - 1);
    
    // Step 2: Reverse first k elements
    reverse(vec, 0, k - 1);
    // Step 3: Reverse remaining elements
    reverse(vec, k, n - 1);
}


int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    int k = 2;

    rotateRight(vec, k);
    printArr(vec);  // Output: 4 5 1 2 3

    return 0;
}
