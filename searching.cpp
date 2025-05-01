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