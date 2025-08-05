// Peak Index Element

// #include<iostream>
// #include<vector>
// using namespace std;
// int peak(vector<int>&vec){
//     int start = 0;
//     int end = vec.size() - 1;
//     int mid;
//     while (start<=end)
//     {
//         mid = start + (end - start) / 2;
//         if (vec[mid + 1] < vec[mid] && vec[mid - 1] < vec[mid])
//         {
//             return mid;
//         }
//         else if (vec[mid + 1] < vec[mid])
//         {
//             end = mid;
//         }
//         else{
//             start = mid + 1;
//         }
//     }
//     return start;
// }
// int main(){
//     vector<int> vec = {2,3,4,5,6,7,5,4,2};
//     int pe = peak(vec);
//     cout<<pe;
//     return 0;
// }

// First and the last Quccrance of element

// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> firstAndLastQuccrance(vector<int> &vec, int target)
// {
//     int start = 0;
//     int end = vec.size() - 1;
//     int mid, first, last;
//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;
//         if (vec[mid] == target)
//         {
//             first = mid;
//             end = mid - 1;
//         }
//         if (vec[mid] < target)
//         {
//             start = mid + 1;
//         }
//         if (vec[mid] > target)
//         {
//             end = mid - 1;
//         }
//     }

//     start = 0;
//     end = vec.size() - 1;

//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;
//         if (vec[mid] == target)
//         {
//             last = mid;
//             start = mid + 1;
//         }
//         if (vec[mid] < target)
//         {
//             start = mid + 1;
//         }
//         if (vec[mid] > target)
//         {
//             end = mid - 1;
//         }
//     }

//     vector<int> ve(2);
//     ve[0] = first;
//     ve[1] = last;
//     return ve;
// }
// int main()
// {
//     vector<int> vec = {2, 3, 4, 4, 4, 4, 4, 8};
//     vector<int> v = firstAndLastQuccrance(vec, 4);
//     for (auto item : v)
//     {
//         cout << item << endl;
//     }
// }



// count the quccrance of the element 


// #include<iostream>
// #include <vector>
// using namespace std;
// int firstAndLastQuccrance(vector<int> &vec, int target)
// {
//     int start = 0;
//     int end = vec.size() - 1;
//     int mid, first, last,count = 0;
//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;
//         if (vec[mid] == target)
//         {
//             first = mid;
//             end = mid - 1;
//         }
//         if (vec[mid] < target)
//         {
//             start = mid + 1;
//         }
//         if (vec[mid] > target)
//         {
//             end = mid - 1;
//         }
//     }

//     start = 0;
//     end = vec.size() - 1;

//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;
//         if (vec[mid] == target)
//         {
//             last = mid;
//             start = mid + 1;
//         }
//         if (vec[mid] < target)
//         {
//             start = mid + 1;
//         }
//         if (vec[mid] > target)
//         {
//             end = mid - 1;
//         }
//     }
//     count = last - first + 1;
//     return count;
// }
// int main()
// {
//     vector<int> vec = {2, 3, 4, 4, 4, 4, 4, 8};
//     int count = firstAndLastQuccrance(vec, 4);
//     cout<<"Count: "<<count<<" ";
// }


// search the insert index of the element || pending Hai Dry Run is ka 

// #include<iostream>
// #include<vector>
// using namespace std;
// int insertedIndex(vector<int>& vec,int target){
//     int start =0;
//     int end = vec.size() - 1;
//     int index = vec.size();
//     int mid;
//     while (start<=end)
//     {
//         mid = start + (end - start) / 2;
        
//         if (vec[mid] < target)
//         {
//             start = mid + 1;
//         }
//         if (vec[mid] > target)
//         {
//             index = mid;
//             end = mid - 1;
//         }
//     }
//     return index;
// }
// int main(){
//     vector<int> vec = {2,4,6,8,10,12,14};
//     int index = insertedIndex(vec, 3);
//     cout<<"Index: "<<index;
// return 0;
// }


// search in rotated array 

#include<iostream>
#include<vector>
using namespace std;
int rotatedArray(vector<int>& vec, int target){
    int start = 0;
    int end = vec.size() - 1;
    int mid;
    while (start<=end)
    {
        mid = start + (end - start) / 2;
        if (vec[mid] == target)
        {
            return mid;
        }
        if (vec[mid] < vec[end] && vec[mid] < target)
        {
            start = mid + 1;
        }
        if (vec[mid] > vec[end] && vec[mid] > target)
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main(){
vector<int> vec = {12,14,16,2,4,6,8};    
int ans = rotatedArray(vec,14);
cout<<"Ans: "<<ans<<" ";
return 0;
}




#include <iostream>
#include <vector>
using namespace std;

// Q1. Peak Index in a Mountain Array.
int findKthPositive(vector<int> &arr, int k)
}

// Q2. Find Minimum in Rotated Sorted Array.
int findMin(vector<int> &nums)
}

// Q3. Search in Rotated Sorted Array.
int search(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] >= arr[0])
        {
            if (arr[start] <= target && arr[mid] >= target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= target && arr[end] >= target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

// Q4. Kth Missing Positive Number.
int findKthPositive(vector<int> &arr, int k)
{
    int start = 0, end = arr.size() - 1, ans = arr.size();
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] - mid - 1 >= k)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans + k;
}

int main()
{
}
