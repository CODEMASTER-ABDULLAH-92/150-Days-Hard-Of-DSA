#include<iostream>
#include<vector>
using namespace std;
vector<int> firstAndLast(vector<int>& vec, int target){
    int start = 0;
    int end = vec.size() - 1;
    int first = -1;
    int last = -1;
    int mid;

    //Find First Quccrance 
    while (start<=end)
    {
        mid = start + (end - start)/2;
        if (vec[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (vec[mid] < target)
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

//Last qccurance
    start =0;
    end = vec.size() - 1;
    while (start<=end)
    {
        mid = start + (end - start)/2;
        if (vec[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (vec[mid] < target)
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    vector<int> a(2);
    a[0] = first;
    a[1] = last;
    return a;
}
int main(){
vector<int> vec= {2,3,4,4,4,4,5};
vector<int> result = firstAndLast(vec, 4);
for(auto i:result){
    cout<<i<<" ";
}
    return 0;
}