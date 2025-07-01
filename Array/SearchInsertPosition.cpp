#include<iostream>
#include<vector>
using namespace std;
int SearchInertPosition(vector<int>& vec, int target){
    int start = 0;
    int end = vec.size() - 1;
    int mid;
    int index = vec.size();

    while (start <=end)
    {
        mid = start + (end - start) / 2;

        if (vec[mid] == target)
        {
            return mid;
        }
        else if (vec[mid] < target)
        {
            start = mid + 1;
        }
        else {
           index = mid;
           end = mid - 1; 
        }
    }
    return index;
}

// ✅ Your Thought (in simple words):
// In the left side case, target is smaller than vec[mid], so the target might be at mid or before mid, so we store mid into index.

// In the right side case, target is greater than vec[mid], so the target must be after mid, and we can't say for sure where exactly — so mid is definitely not a valid insert place, and we don’t store it.

int main(){
    vector<int> vec = {1,3,5,7,9,11};
    int result = SearchInertPosition(vec,6);
    cout<<result<<" ";
    return 0;
}