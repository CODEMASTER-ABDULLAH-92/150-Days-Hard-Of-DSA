#include<iostream>
using namespace std;
int sqrtOfX(int& num){
    int start = 0;
    int end = num;
    int mid;
    int ans = -1;  // ✅ initialized
    if (num < 2)
    {
        return num;
    }
    
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (mid * mid == num)
        {
            return mid;
        }
        else if (mid * mid < num)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    int num;
    cout<<"Enter the Num:";
    cin>>num;
    int result = sqrtOfX(num);
    cout<<result<<" ";
}