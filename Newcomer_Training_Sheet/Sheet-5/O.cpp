#include <iostream>
#include <cmath>
#include <algorithm>
#include <unordered_map>
using namespace std;
 
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
bool isPalindrome(int n) {
    int temp = n, rev = 0;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return n == rev;
}
int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) {
                count++;
            } else {
                count += 2;
            }
        }
    }
    return count;
}
int getMinimum(int arr[], int n) {
    int minimum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }
    return minimum;
}
int countPrimes(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
    return count;
}
int countPalindromes(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPalindrome(arr[i])) {
            count++;
        }
    }
    return count;
}
int getMaxValue(int arr[], int n) {
    int maxValue = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
    return maxValue;
}
int getMaxDivisors(int arr[], int n) {
    unordered_map<int, int> divisorsCount;
    int maxDivisors = 0, maxDivisorsNumber = -1;
    int maxValue = getMaxValue(arr, n);
    for (int i = 0; i < n; i++) {
        int divisors = countDivisors(arr[i]);
        divisorsCount[arr[i]] = divisors;
        maxDivisors = max(maxDivisors, divisors);
    }
    for (int i = 0; i < n; i++) {
        if (divisorsCount[arr[i]] == maxDivisors) {
            if (maxDivisorsNumber == -1 || arr[i] > maxDivisorsNumber) {
                maxDivisorsNumber = arr[i];
            }
        }
    }
    return maxDivisorsNumber;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The maximum number : "<<getMaxValue(arr,n)<<endl;
    cout<<"The minimum number : "<<getMinimum(arr,n)<<endl;
    cout<<"The number of prime numbers : "<<countPrimes(arr,n)<<endl;
    cout<<"The number of palindrome numbers : "<<countPalindromes(arr,n)<<endl;
    cout<<"The number that has the maximum number of divisors : "<<getMaxDivisors(arr,n)<<endl;
    return 0;
}
