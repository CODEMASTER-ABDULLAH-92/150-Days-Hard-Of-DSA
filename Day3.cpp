// C++ Functions: Pass by Value vs Pass by Reference



// 1. Prime Number Check Function
#include<iostream>
using namespace std;

// Function to check if a number is prime
int primeNumber(int n) {  // 'n' is a parameter (can be named anything, like 'num')
    if (n < 2) 
        return 0;  // Numbers less than 2 are not prime

    for(int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;  // If divisible, not a prime
        }
    }
    return 1;  // If no divisors found, it's prime
}

int main() {
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    int result = primeNumber(n);  // 'n' here is the argument (actual value passed)
    cout << result;
    return 0;
}


// Key Points:
// Parameter (int n) → Variable inside function (can be renamed).

// Argument (n in main()) → Actual value passed to the function.

// Returns 0 → Not prime.

// Returns 1 → Prime.







//  ==========>>>>>>>   2. Pass by Value (Copy of Value)

#include<iostream>
using namespace std;

// Function increments a copy of 'n' (original remains unchanged)
int increment(int n) {  
    return ++n;  // Increments the copy and returns it
}

int main() {
    int a = 10;
    int b = increment(a);  // 'a' is passed by value (copy made)
    cout << a << endl;  // Output: 10 (original unchanged)
    cout << b;          // Output: 11 (modified copy)
    return 0;
}

// Key Points:
// Pass by Value → Creates a copy of the variable.

// Original (a) remains unchanged.

// Modified copy (b) gets the new value.



// 3. Pass by Reference (Modifies Original)

#include<iostream>
using namespace std;

// Function takes reference to 'n' (modifies original)
int increment(int &n) {  // '&n' means direct access to original
    return ++n;  // Changes the actual variable
}

int main() {
    int a = 10;
    int result = increment(a);  // 'a' is passed by reference
    cout << result << " ";  // Output: 11 (original modified)
    return 0;
}
// Key Points:
// Pass by Reference (&n) → Works on the original variable.

// No copy is made, changes affect the original.

// Efficient for large data (avoids copying).