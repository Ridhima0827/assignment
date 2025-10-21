#include <stdio.h>
#include <math.h>
#include "mylib.h"


int reverseDigits(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}


int isArmstrong(int num) {
    int temp = num, sum = 0, digits = 0;
    while (temp) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    return (sum == num);
}


int isAdams(int num) {
    int square = num * num;
    int revNum = reverseDigits(num);
    int revSquare = revNum * revNum;
    return (square == reverseDigits(revSquare));
}


int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}


int isPalindrome(int num) {
    return num == reverseDigits(num);
}


int isPrimePalindrome(int num) {
    return (isPrime(num) && isPalindrome(num));
}