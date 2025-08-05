#include<iostream>
#include<vector>
using namespace std;
int peakIndex(vector<int>& vec){
    int start = 0;
    int end = vec.size() - 1;
    int mid;
    while (start<=end)
    {
        mid = start + (end - start) / 2;

        if (vec[mid + 1] < mid && vec[mid - 1] < mid  )
        {
            return mid;
        }
        if (vec[mid + 1] < mid)
        {
            start = mid + 1;
        }

    }
     
}
int main(){
    vector<int> vec = {1,2,3,4,5,6,4,3,2};
    return 0;
}

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int start = 0;
//         int end = arr.size() - 1;
//         int mid;

//         while(start <= end){
//             mid = start + (end - start ) / 2;
//             if(arr[mid] > arr[mid - 1] && arr[mid] > arr[ mid + 1]){
//                 return mid;
//             }
//             if(arr[mid] > arr[mid + 1]){
//                 end = mid;
//             }
//             if(arr[mid] < arr[mid + 1]){
//                 start = mid + 1;
//             }
//         } 
//         return start;  
//     }
// };
