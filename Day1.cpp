// Fibconic series is pending 

// #include <iostream>
// using namespace std;
// this is incorrect Function 
// This loop always returns on the first iteration, whether divisible or not — meaning it doesn't fully check all values from 2 to num - 1. This leads to wrong results.
// int primeNumber(int num)
// {
//     if (num < 2)
//         return 0;
//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//             return 0;
//         else
//             return 1;
//     }
// }


// // this is coorect from 
// int primeNumber(int num)
// {
//     if (num < 2)
//         return 0;
//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//             return 0;
//     }
//     return 1; // only return 1 after confirming no divisors exist
// }


// int main()
// {
//     int num;
//     cout << "Enter the num:";
//     cin >> num;
//     int result = primeNumber(num);
//     if (result == 0)
//     {
//         cout << num << " is not a prime Number: ";
//     }
//     else
//     {
//         cout << num << " is a prime number";
//     }

//     return 0;
// }

//Table of three

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 1; i<=10; i++){
//         cout<<"3 * "<<i<<" = "<<3*i<<endl;
//     }   
// return 0;
// }


// Enter num:2
// Enter pow:5
// 32
// #include<iostream>
// using namespace std;
// int powerOfNumber(int num, int pow){
//     int ans;
//     for(int i =0; i< pow; i++){
//         ans =ans*num;
//     }
//     return ans;
// }
// int main(){
//     int num,pow;
//     cout<<"Enter num:";
//     cin>>num;
//     cout<<"Enter pow:";
//     cin>>pow;
//     int res = powerOfNumber(num,pow);
//     cout<<res;
// return 0;
// }


// sum of n natural numbers;
// here n = 10; and may be any;


// #include<iostream>
// using namespace std;
// int main(){
//     int sum = 0;
//     int n ;
//     cout<<"Enter the n:";
//     cin>>n;
//     for(int i =1; i<= n; i++)
//     {sum = sum + i;}
//     cout<<"Sum: "<<sum;   
// return 0;
// }


// factorail of the number 
// #include<iostream>
// using namespace std;
// int main(){
//     int sum = 0;
//     int n ;
//     cout<<"Enter the n:";
//     cin>>n;
//     int fact = 1;
//     for(int i =1; i<=n; i++){
//         fact = fact * i;
//     }
//     cout<<"Fact: "<<fact;
// return 0;
// }

