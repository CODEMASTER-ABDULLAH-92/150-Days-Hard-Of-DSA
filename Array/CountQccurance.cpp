#include<iostream>
#include<vector>
using namespace std;
int countQccurance(vector<int>& vec, int target){
    int start  = 0;
    int end = vec.size() - 1;
    int first, last, mid,ans;
    //Find First 
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (vec[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (vec[mid] < target)
        {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    
    //Find Last 
    start = 0;
 end = vec.size() - 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (vec[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (vec[mid] < target)
        {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    ans = last - first + 1;
    return ans;
}
int main(){
    vector<int> vec = {1,2,4,4,4,5};
    int count = countQccurance(vec, 4);
    cout<<count<<"  ";
    return 0;
}