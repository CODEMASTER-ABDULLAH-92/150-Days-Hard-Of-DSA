#include<iostream>
using namespace std;
int maximum(int arr[], int length){
    int max = INT_MIN;
    for(int i =0; i< length; i++){
    if (max < arr[i])
    {
        max = arr[i];
    }
    }
    return max;
}
int minmum(int arr[], int length){
    int minimum = INT_MAX;
    for(int i =0; i< length; i++){
        if (minimum > arr[i])
        {
            minimum =  arr[i];
        }
    }
    return minimum;
}
int main(){
    int arr[] = {12,43,64,44,21};
    int max = maximum(arr,5);
    int min = minmum(arr,5);
    cout<<"Max : "<<max<<endl;
    cout<<"Min : "<<min<<endl;
return 0;
}



// max = -2342  
// -2342 < 12 
// | i | arr[i] | max (before) | Condition (`max < arr[i]`) | max (after) |
// |---|--------|--------------|-----------------------------|-------------|
// | 0 | 12     | INT_MIN      | true                        | 12          |
// | 1 | 43     | 12           | true                        | 43          |
// | 2 | 64     | 43           | true                        | 64          |
// | 3 | 44     | 64           | false                       | 64          |
// | 4 | 21     | 64           | false                       | 64          |



// Minimum number table 

// INT_MAX = min; 
// | i | arr[i] | min (before) | Condition (`min > arr[i]`) | min (after) |
// |---|--------|--------------|-----------------------------|-------------|
// | 0 | 12     | 2147483647   | true                        | 12          |
// | 1 | 43     | 12           | false                       | 12          |
// | 2 | 64     | 12           | false                       | 12          |
// | 3 | 44     | 12           | false                       | 12          |
// | 4 | 21     | 12           | false                       | 12          |