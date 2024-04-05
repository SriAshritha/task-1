//STRONG DOSE
//QUESTION 1:- PLAYING WITH NUMBERS

#include <iostream>
using namespace std;
int countDistinctPrimeFactors(int n) {
    int count = 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            count++;
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    if (n > 1) {
        count++;
    }
    return count;
}
int main() {
    int consecutiveCount = 0;
    int currentNumber = 1;
    
    while (consecutiveCount < 4) {
        if (countDistinctPrimeFactors(currentNumber) == 4) {
            consecutiveCount++;
            if (consecutiveCount == 4) {
                cout << "The four consecutive integers with four distinct prime factors each are: "
                     << currentNumber - 3 << ", " << currentNumber - 2 << ", " 
                     << currentNumber - 1 << ", " << currentNumber << endl;
            }
        } else {
            consecutiveCount = 0;
        }
        currentNumber++;
    }
    
    return 0;
}

/* ---> countDistinctPrimeFactors function:

This function takes an integer n as input and returns the count of its distinct prime factors.
It initializes a variable count to keep track of the number of distinct prime factors.
It iterates through numbers starting from 2 up to the square root of n.
If n is divisible by the current number i, it means i is a prime factor of n.
It increments the count and divides n by i repeatedly until n is no longer divisible by i. This ensures that only distinct prime factors are counted.
If after the loop n is greater than 1, it means n itself is a prime factor, so the count is incremented by 1.
Finally, it returns the count of distinct prime factors. */

