// Fibconic series is pending 

#include <iostream>
using namespace std;
// this is incorrect Function 
// This loop always returns on the first iteration, whether divisible or not — meaning it doesn't fully check all values from 2 to num - 1. This leads to wrong results.
int primeNumber(int num)
{
    if (num < 2)
        return 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return 0;
        else
            return 1;
    }
}


// this is coorect from 
int primeNumber(int num)
{
    if (num < 2)
        return 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1; // only return 1 after confirming no divisors exist
}


int main()
{
    int num;
    cout << "Enter the num:";
    cin >> num;
    int result = primeNumber(num);
    if (result == 0)
    {
        cout << num << " is not a prime Number: ";
    }
    else
    {
        cout << num << " is a prime number";
    }

    return 0;
}

// Table of three

#include<iostream>
using namespace std;
int main(){
    for(int i = 1; i<=10; i++){
        cout<<"3 * "<<i<<" = "<<3*i<<endl;
    }   
return 0;
}


// Enter num:2
// Enter pow:5
// 32
#include<iostream>
using namespace std;
int powerOfNumber(int num, int pow){
    int ans;
    for(int i =0; i< pow; i++){
        ans =ans*num;
    }
    return ans;
}
int main(){
    int num,pow;
    cout<<"Enter num:";
    cin>>num;
    cout<<"Enter pow:";
    cin>>pow;
    int res = powerOfNumber(num,pow);
    cout<<res;
return 0;
}


// sum of n natural numbers;
// here n = 10; and may be any;


#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int n ;
    cout<<"Enter the n:";
    cin>>n;
    for(int i =1; i<= n; i++)
    {sum = sum + i;}
    cout<<"Sum: "<<sum;   
return 0;
}


// factorail of the number 
#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int n ;
    cout<<"Enter the n:";
    cin>>n;
    int fact = 1;
    for(int i =1; i<=n; i++){
        fact = fact * i;
    }
    cout<<"Fact: "<<fact;
return 0;
}

//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
#include<iostream>
using namespace std;
int main(){
 for(int row =0; row < 5; row++){
    for(int col = 0; col<5; col++){
        cout<<" *";
    }
    cout<<endl;
 }   
return 0;
}

// 1 1 1 1 1 
// 2 2 2 2 2 
// 3 3 3 3 3 
// 4 4 4 4 4 
// 5 5 5 5 5 

#include<iostream>
using namespace std;
int main(){
 for(int row =1; row <= 5; row++){
    for(int col = 1; col<=5; col++){
        cout<<row<<" ";
    }
    cout<<endl;
 }   
return 0;
}




// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
#include<iostream>
using namespace std;
int main(){
 for(int row =1; row <= 5; row++){
    for(int col = 1; col<=5; col++){
        cout<<col<<" ";
    }
    cout<<endl;
 }   
return 0;
}


// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 

#include<iostream>
using namespace std;
int main(){
    for(int row = 1; row<=5; row++){
        for(int col = 5; col>=1; col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }   
return 0;
}


// 1 4 9 16 25 
// 1 4 9 16 25 
// 1 4 9 16 25 
// 1 4 9 16 25 
// 1 4 9 16 25 

#include<iostream>
using namespace std;
int main(){
    for(int row = 1; row<=5; row++){
        for(int col = 1; col<=5; col++){
            cout<<col*col<<" ";
        }
        cout<<endl;
    }   
return 0;
}


// a a a a a 
// b b b b b 
// c c c c c 
// d d d d d 
// e e e e e

#include<iostream>
using namespace std;
int main(){
 for(char row = 'a'; row<= 'e'; row++){
    for(char col = 'a'; col<= 'e'; col++){
        cout<<row<<" ";
    }
    cout<<endl;
 }   
return 0;
}



// a b c d e 
// a b c d e 
// a b c d e 
// a b c d e 
// a b c d e 

#include<iostream>
using namespace std;
int main(){
 for(char row = 'a'; row<= 'e'; row++){
    for(char col = 'a'; col<= 'e'; col++){
        cout<<col<<" ";
    }
    cout<<endl;
 }   
return 0;
}


// 1 2 3 4 5 
// 6 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20 
// 21 22 23 24 25 

#include<iostream>
using namespace std;
int main(){
    int count = 1;
 for(int row = 1; row<=5; row++){
    for(int col = 1; col <= 5; col++){
        cout<<count<<" ";
        count++;
    }
    cout<<endl;
 }   
return 0;
}



// ======================== Part 2 of pattern Printing 


//  *
//  * *
//  * * *
//  * * * *
//  * * * * *

#include<iostream>
using namespace std;
int main(){
 for(int row = 1; row<=5; row++){
    for(int col = 1; col <=row; col++){
        cout<<" *";
    }
    cout<<endl;
 }   
return 0;
}


// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

#include<iostream>
using namespace std;
int main(){
    for(int row = 1; row<=5; row++){
        for(int col = 1; col<=row; col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }   
return 0;
}


// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 

#include<iostream>
using namespace std;
int main(){
    for(int row = 1; row<=5; row++){
        for(int col = 1; col<=row; col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }   
return 0;
}


//  * * * * *
//  * * * *
//  * * *
//  * *
//  *

#include<iostream>
using namespace std;
int main(){
 for(int row = 1; row<=5; row++){
    for(int col = 5; col >= row; col--){
        cout<<" *";
    }
    cout<<endl;
 }   
return 0;
}

// row  print 
// 1    5
// 2    4
// 3    3
// 4    2
// 5    1


// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
#include<iostream>
using namespace std;
int main(){
 for(int row = 1; row<=5; row++){
    for(int col = 1; col <= (5 - row) + 1; col++){
        cout<<col<<" ";
    }
    cout<<endl;
 }   
return 0;
}



// 5 
// 5 4 
// 5 4 3 
// 5 4 3 2 
// 5 4 3 2 1 
#include<iostream>
using namespace std;
int main(){
 for(int row = 1; row<=5; row++){
    for(int col = 1; col<=row; col++){
        cout<< (5 - col) + 1 <<" ";
    }
    cout<<endl;
 }   
return 0;
}

// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1

#include<iostream>
using namespace std;
int main(){
 for(int row = 1; row<=5; row++){
    for(int col = 1; col <= 5 - row + 1; col++){
        cout<<col<<" ";
    }
    cout<<endl;
 }  
return 0;
}


// part 3 of pattern printing ==============     


//  - - - - - - - - - *
//  - - - - - - - - * *
//  - - - - - - - * * *
//  - - - - - - * * * *
//  - - - - - * * * * *
//  - - - - * * * * * *
//  - - - * * * * * * *
//  - - * * * * * * * *
//  - * * * * * * * * *
//  * * * * * * * * * *

#include<iostream>
using namespace std;
int main(){
 int n  = 10;
 for(int row = 1; row<=n; row++){
    for(int col = n - 1; col>=row; col--){
        cout<<" -";  // Here i use the - instead of the blank space for clear understanding
    }
    for(int col = 1; col<=row; col++){
        cout<<" *";
    }
    cout<<endl;
 }   
return 0;
}



// Home work of day 1 
// Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.


#include<iostream>
using namespace std;
int main(){
 int a = 10;
 int b =20;
 if (a > b)
 {
    cout<<a<<" is greater than "<<b;
 }
 else
 {
    cout<<b<<" is greater than "<<a;
 }
    
return 0;
}



#include<iostream>
using namespace std;
int main(){
 int age;
 cout<<"Enter the age: ";
 cin>>age;
 if (age > 18)
 {
    cout<<"Adult";
 }
 else
 {
    cout<<"Teenager";
 }
    
return 0;
}


#include<iostream>
using namespace std;
int main(){
 int age;
 cout<<"Enter the age: ";
 cin>>age;
 if (age < 12 || age > 65)
 {
    cout<<"You are  qualify for a discounted ticket price";
 }
 else
 {
    cout<<"You are not qualify for a discounted ticket price";
 }
    
return 0;
}


// Print all Odd numbers from 1 to n, take n as an input from the user. 

#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"Enter the n \n";
 cin>>n;
 for(int i = 1; i<= n; i++){
    if (i % 2 == 1)
    cout<<i<<" ";
 }   
return 0;
}


// Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.
#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"Enter the n ";
 cin>>n;
 for(int i = 1; i<= n; i++){
    if (i % 4 == 0)
    cout<<i<<" ";
 }   
return 0;
}



// There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.

#include<iostream>
using namespace std;
int main(){
 for(int i = 220; i <= 730; i+=7)
 cout<<i<<" ";   
return 0;
}



// ================>>>>> Print Sum of square of first n natural number.


#include<iostream>
using namespace std;
int main(){
    int n;
    int product = 1;
    int sum = 0;
    cout<<"Enter the Number: ";
    cin>>n;
    for(int i = 1; i <= n; i++){
        product = i*i;
        sum = sum + product;
    }
    cout<<"Total sum: "<<sum;
return 0;
}


// Total sum of the cubes 

#include<iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Enter the Number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum = sum + (i * i * i);  // sum of cubes
    }

    cout << "Total sum of cubes: " << sum << endl;
    return 0;
}

//         1 
//       2 2 
//     3 3 3 
//   4 4 4 4 
// 5 5 5 5 5 
#include<iostream>
using namespace std;
int main(){
 for(int row = 1; row<=5; row++){
    for(int col = 1; col <= 5 - row; col++){
        cout<<"  ";
    }
    for(int col = 1; col<=row; col++){
        cout<<row<<" ";
    }
    cout<<endl;
 }   
return 0;
}




//         1 
//       1 2 
//     1 2 3 
//   1 2 3 4 
// 1 2 3 4 5

#include<iostream>
using namespace std;
int main(){
 for(int row = 1; row<=5; row++){
    for(int col = 1; col <= 5 - row; col++){
        cout<<"  ";
    }
    for(int col = 1; col<=row; col++){
        cout<<col<<" ";
    }
    cout<<endl;
 }   
return 0;
}


//         1 
//       2 1 
//     3 2 1 
//   4 3 2 1 
// 5 4 3 2 1 
#include<iostream>
using namespace std;
int main(){
 for(int row = 1; row<=5; row++){
    for(int col = 1; col <= 5 - row; col++){
        cout<<"  ";
    }
    for(int col = row; col>=1; col--){
        cout<<col<<" ";
    }
    cout<<endl;
 }   
return 0;
}



#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int row = 1; row<=n; row++){
        for(int col = 1; col<= n - row; col++){
            cout<<" ";
        }
        for(int col = 1; col <= row; col++){
            cout<< n - col + 1; 
        }
        cout<<endl;
    }  
return 0;
}