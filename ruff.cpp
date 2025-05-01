// // selection 
// // binary search 
// // bubble sort 


// #include<iostream>
// using namespace std;
// void printArr(int arr[], int length){
//     for(int i =0; i < length; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// // void selectionSort(int arr[], int length){
// //     for(int i = 0; i< length; i++){
// //         int minIndex = i;
// //         for(int j = i + 1; j < length; j++){
// //             if (arr[minIndex] > arr[j])
// //             {
// //                 minIndex = j;
// //             }
// //         }
// //         swap(arr[minIndex],arr[i]);
// //     }
// // }

// // void bubbleSort(int arr[], int length){
// //     for(int i = 0; i< length; i++){
// //         for(int j = 0; j < length - i - 1; j++){
// //             if (arr[j + 1] < arr[j] )
// //             {
// //                 swap(arr[j+1],arr[j]);
// //             }
// //         }
// //     }
// // }


// void insertionSort(int arr[], int length){
//     for(int i = 1; i < length; i++){
//         for(int j = i; j >= 0; j--){
//             if (arr[j - 1] > arr[j])
//             {
//                 swap(arr[j-1],arr[j]);
//             }
//         }
//     }
// }
// int main(){
//     int arr[] = {92,45,72,64,11};
//     insertionSort(arr,5);
//     printArr(arr,5);
// return 0;
// }




#include<iostream>
using namespace std;
int binarySearch(int arr[], int length, int key){
    int start = 0;
    int end = length - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        if (arr[mid] > key)
        {
            end = mid - 1; 
        }
        mid = start + (end - start) /2;
    }
    return -1;
}
int main(){
 int arr[] = {12,54,65,75,92};   
 int key;
 cin>>key;
 int result = binarySearch(arr,5,key);
 cout<<result;
return 0;
}