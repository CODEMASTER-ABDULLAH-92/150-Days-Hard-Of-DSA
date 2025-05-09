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


#include<iostream>
#include<vector>
using namespace std;

vector<int> findFirstAndLast(vector<int> &vec, int start, int end, int target){
    int first = -1, last = -1, mid;

    // find first 
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (vec[mid] == target) {
            first = mid;
            end = mid - 1;
        }
        else if (vec[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    // find last
    start = 0;
    end = vec.size() - 1;
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (vec[mid] == target) {
            last = mid;
            start = mid + 1;
        }
        else if (vec[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return {first, last};
}

int main(){
    vector<int> vec = {1, 2, 3, 3, 4, 5, 6};
    vector<int> b = findFirstAndLast(vec, 0, vec.size() - 1, 3);
    for(auto item : b){
        cout << item << " ";
    }
    return 0;
}
