// #include <iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void print(vector<int> &vec){
//     for(auto i:vec){
//         cout<<i<<" ";
//     }
// }
// void segregate(vector<int> &vec){
//     int start = 0;
//     int end = vec.size() - 1;
//     while (start<end)
//     {
//         while (vec[start] == 0 && start<end)
//         start++;
//         while(vec[end] == 1 && start<end)
//         end--;
// if (start<end)
// {
//     swap(vec[start],vec[end]);
//     start++;
//     end--;
// }
// }    
// }
// int main() {
//     vector<int> vec = {0,1,0,1,0,1,0,1,0,1};
//     segregate(vec);
//     print(vec);
//     return 0;
// }



// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<int> twoSum(vector<int>& vec, int target){
//     int start = 0;
//     int end = vec.size() - 1;
//     vector<int> ans(2);
//     while (start<end)
//     {
//         if (vec[start] + vec[end] == target)
//         {
//             ans[0] = start;
//             ans[1] = end;
//             return ans;
//         }
//         else if(vec[start] + vec[end] < target){
//             start++;
//         }
//         else{
//             end--;
//         }
//     }
//     return {-1,-1};
// }
// int main(){
// vector<int> vec = {2,7,11,15};
// vector<int> ans = twoSum(vec,8);
// for(auto i:ans){
//     cout<<i<<" ";
// }
//     return 0;
// }



// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<int> firstAndLast(vector<int>& vec, int target){
//     int start = 0;
//     int end = vec.size() - 1;
//     int mid;
//     int first = -1;
//     int last = -1;
//     //First
//     while (start<=end)
//     {
//         mid = start + (end - start) / 2;
//         if (vec[mid] == target)
//         {
//             first = mid;
//             end = mid - 1;
//         }
//         else if(vec[mid] < target){
//             start = mid + 1;
//         }
//         else{
//             end = mid - 1;
//         }
//     }
//     start = 0;
//     end = vec.size() - 1;

//      while (start<=end)
//     {
//         mid = start + (end - start) / 2;
//         if (vec[mid] == target)
//         {
//             last = mid;
//             start = mid + 1;
//         }
//         else if(vec[mid] < target){
//             start = mid + 1;
//         }
//         else{
//             end = mid - 1;
//         }
//     }
//     return {first,last};
// }
// int main(){
//     vector<int> vec = {2,4,5,6,6,8,8,7};
//     vector<int> ans = firstAndLast(vec,6);
//     for(auto i:ans){
//         cout<<i<<" ";
//     }
//     return 0;
// }




// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> prefixSum(vector<int>& vec){
//     int totalSum = 0;
//     vector<int> prefix(vec.size());
//     prefix[0] = vec[0];
//     for(auto i = 1; i<vec.size(); i++){
//         prefix[i] = prefix[i-1] + vec[i];
//     }
//     return prefix;
// }
// int main(){
// vector<int> vec = {1,2,3,4,5};
// vector<int> ans = prefixSum(vec);
// for(auto i:ans){
//     cout<<i<<" ";
// }
// return 0;
// }



//Prefix Sum 
#include<iostream>
// #include<vector>
// using namespace std;
// void prefixSum(vector<int>& vec){
//     vector<int> result(vec.size());
//     result[0] = vec[0];
//     for(auto i:vec){
//         result[i] = vec[i] + result[i-1];
//     }
//     //printing the result vector
//     for(auto i:result){
//         cout<<i<<" ";
//     }
// }
// int main() {
//     vector<int> arr= {1,2,3,4,5,6};
//     prefixSum(arr);
//     return 0;
// }



// #include<vector>
// using namespace std;
// void suffixSum(vector<int>& vec){
//     int n = vec.size();
//     vector<int> result(n);

//     result[n-1] = vec[n-1];

//     for(auto i = n - 1; i>=0; i--){
//         result[i] = result[i + 1] + vec[i];
//     }
//     //printing the result vector
//     for(auto i:result){
//         cout<<i<<" ";
//     }
// }
// int main() {
//     vector<int> arr= {1,2,3,4,5,6};
//     suffixSum(arr);
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
int equal(vector<int>& vec){
    int totalSum = 0;
    int prefix = 0;
    for(int i = 0; i < vec.size(); i++){
        totalSum = totalSum + vec[i];
    }

    for(int i = 0; i< vec.size() - 1; i++){
        prefix+=vec[i];
        if(totalSum - prefix == prefix)
        return 1;
    }
    return 0;
}
int main(){
    vector<int> vec = {1,2,3,4,5,5};
    int e = equal(vec);
    cout<<e<<endl;
    return 0;
}