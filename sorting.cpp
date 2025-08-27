#include<iostream>
#include<vector>
using namespace std;
// void selectionSort(vector<int>&vec){
//     for(auto i = 0; i < vec.size(); i++ ){
//         int minindex = i;
//         for(auto j = i + 1; j<vec.size(); j++){
//             if (vec[j] < vec[minindex])
//             {
//                 minindex = j;
//             }
//         }
//         swap(vec[minindex], vec[i]);
//     }
// }

// void bubbleSort(vector<int>& vec){
//     for(auto i = 0; i< vec.size(); i++){
//         for(auto j =0; j<vec.size() - i - 1; j++){
//             if (vec[j+1] < vec[j] )
//             {
//                 swap(vec[j+1],vec[j]);
//             }
//         }
//     }
// }

void insertionSort(vector<int>& vec){
    for(auto i = 1; i < vec.size(); i++){
        for(auto j = i; j>=0; j--){
            if (vec[j - 1] > vec[j])
            {
                swap(vec[j - 1], vec[j]);
            }
        }
    }
}
int main(){
    vector<int> vec= {92,45,72,12,11,10};
    insertionSort(vec);
    for(auto item:vec){
        cout<<item<<" ";
    }
return 0;
}