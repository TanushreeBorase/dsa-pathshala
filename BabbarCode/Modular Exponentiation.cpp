long long modularExponentiation(long long x, long long n, long long m) {
    long long result = 1;  // Initialize result
    x = x % m;            // To handle cases where x >= m

    while (n > 0) {
        // If n is odd, multiply x with the result
        if (n % 2 == 1) {
            result = (result * x) % m;
        }
        // Square x and reduce n
        x = (x * x) % m;
        n /= 2;
    }

    return result;
}
/*
Problem statement
You are given a three integers 'X', 'N', and 'M'. 
Your task is to find ('X' ^ 'N') % 'M'. A ^ B is defined as A raised to power B and A % C is the remainder when A is divided by C.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= T <= 100   
1 <= X, N, M <= 10^9

Time limit: 1 sec
Sample Input 1 :
2 
3 1 2
4 3 10
Sample Output 1 :
1
4
Explanation for Sample Output 1:
In test case 1, 
X = 3, N = 1, and M = 2 
X ^ N = 3 ^ 1 = 3 
X ^ N % M = 3 % 2 = 1. 
So the answer will be 1.

In test case 2,
X = 4, N = 3, and M = 10 
X ^ N = 4 ^ 3 = 64 
X ^ N % M = 64 % 10 = 4. 
So the answer will be 4.

*/
