// / Minimum in the rotate array
#include<iostream>
#include<vector>
using namespace std;
int findMin(vector<int>& nums) {
    int start = 0;
    int end = nums.size() - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] > nums[end]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }

    return nums[start];  // or nums[end], both are same here
}

int minInRotateArray(vector<int>& vec){

    int start=0;
    int end = vec.size() - 1;
    int mid;
    while (start<end)
    // while (start <= end)
// This condition never breaks when start == end, and if end = mid keeps happening (as it does when vec[mid] <= vec[end]), you get stuck in an infinite loop.
    {
        mid = start + (end - start) / 2;
        if (vec[mid] < vec[end])
        {
            end = mid;
        }
        else{
            start = mid + 1;
        }
    }
    return vec[start];
}
int main(){
    vector<int> vec = {12,14,16,0,1,2,3,4,5};
    int result = findMin(vec);
    cout<<result<<" ";
    return 0;
}

// Why compare nums[mid] > nums[end]?
// Let’s explore this by understanding what nums[end] tells us:

// The right half of the array (from mid to end) is sorted only if nums[mid] <= nums[end].

// If nums[mid] > nums[end], it means the rotation point is on the right, and minimum must be in the right half.

// 🔍 Here's what each case means:
// ✅ Case 1: nums[mid] > nums[end]
// The minimum must be in the right half (excluding mid).

// So, do: start = mid + 1

// ✅ Case 2: nums[mid] <= nums[end]
// The minimum could be at mid or in the left half.

// So, do: end = mid

// 🔁 Why not use nums[start]?
// Using nums[start] is less reliable in determining the sorted portion. Why?

// At the beginning, nums[start] could be greater than nums[end] (due to rotation).

// But even if nums[mid] < nums[start], you can’t confidently say where the pivot lies without knowing the right side’s order.

// 🧠 nums[end] always helps you know whether the right side is sorted, because if it is sorted, the minimum can only be on the left or mid.