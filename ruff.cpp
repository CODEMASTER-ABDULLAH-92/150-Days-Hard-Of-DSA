// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(vector<int>& vec, int start, int mid, int end){
//     int left = start, right = mid + 1, index = 0;
//     vector<int>temp(end - start + 1);
//     while (left<=mid && right<=end)
//     {
//         if (vec[left] <= vec[right])
//         {
//             temp[index] = vec[left];
//             left++;
//             index++;
//         }
//         else{
//             temp[index] = vec[right];
//             right++;
//             index++;
//         }
//     }
//     while (left<=mid)
//     {
//         temp[index] = vec[left];
//         index++;
//         left++;
//     }
//     while (right<=end)
//     {
//         temp[index] = vec[right];
//         index++;
//         right++;
//     }
//     index = 0;
//     while (start<=end)
//     {
//         vec[start] = temp[index];
//         start++;
//         index++;
//     }
// }
// void mergeSort(vector<int>& vec, int start, int end){
//     if(start == end)
//     return;
//     int mid = start + (end - start) / 2;
//     //left side 
//     mergeSort(vec, start, mid);
//     //right side
//     mergeSort(vec,mid+1,end);
//     //combine
//     merge(vec,start,mid,end);
// }
// int main(){
//     vector<int> vec = {92,45,12,11,10,72};
//     mergeSort(vec, 0, vec.size() - 1);
//     for(auto item:vec){
//         cout<<item<<" ";
//     }
// return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> findFirstAndLast(vector<int> &vec, int start, int end, int target){
//     int first = -1, last = -1, mid;

//     // find first 
//     while (start <= end) {
//         mid = start + (end - start) / 2;
//         if (vec[mid] == target) {
//             first = mid;
//             end = mid - 1;
//         }
//         else if (vec[mid] < target) {
//             start = mid + 1;
//         }
//         else {
//             end = mid - 1;
//         }
//     }

//     // find last
//     start = 0;
//     end = vec.size() - 1;
//     while (start <= end) {
//         mid = start + (end - start) / 2;
//         if (vec[mid] == target) {
//             last = mid;
//             start = mid + 1;
//         }
//         else if (vec[mid] < target) {
//             start = mid + 1;
//         }
//         else {
//             end = mid - 1;
//         }
//     }

//     return {first, last};
// }

// int main(){
//     vector<int> vec = {1, 2, 3, 3, 4, 5, 6};
//     vector<int> b = findFirstAndLast(vec, 0, vec.size() - 1, 3);
//     for(auto item : b){
//         cout << item << " ";
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

void sorting(int arr[], int length){
    int count0 = 0, count1 = 0, count2 = 0;

    for(int i = 0; i < length; i++){
        if(arr[i] == 0){
            count0++;
        }
        else if(arr[i] == 1){
            count1++;
        }
        else{
            count2++;
        }
    }

    for(int i = 0; i < count0; i++){
        arr[i] = 0;
    }
    for(int i = count0; i < count0 + count1; i++){
        arr[i] = 1;
    }
    for(int i = count0 + count1; i < length; i++){
        arr[i] = 2;
    }
}

int main(){
    int arr[] = {0,1,2,0,1,2,0,1,2};
    sorting(arr, 9);
    for(int i = 0; i < 9; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
