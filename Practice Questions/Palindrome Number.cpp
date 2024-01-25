/*Intuition:
The intuition behind this code is to reverse the entire input number and check if the reversed number is equal 

to the original number. If they are the same, then the number is a palindrome.

Approach 1: Reversing the Entire Number
Explanation:
We begin by performing an initial check. If the input number x is negative, it cannot be a palindrome since
palindromes are typically defined for positive numbers. In such cases, we immediately return false.

We initialize two variables:

reversed: This variable will store the reversed value of the number x.
temp: This variable is a temporary placeholder to manipulate the input number without modifying the original value.
We enter a loop that continues until temp becomes zero:

Inside the loop, we extract the last digit of temp using the modulo operator % and store it in the digit variable.
To reverse the number, we multiply the current value of reversed by 10 and add the extracted digit.
We then divide temp by 10 to remove the last digit and move on to the next iteration.
Once the loop is completed, we have reversed the entire number. Now, we compare the reversed value reversed with 
the original input value x.

If they are equal, it means the number is a palindrome, so we return true.
If they are not equal, it means the number is not a palindrome, so we return false.
The code uses a long long data type for the reversed variable to handle potential overflow in case of large input numbers.
*/
code: 

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }

        long long reversed = 0;
        long long temp = x;
    
        while(temp != 0){
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }
    
        return(reversed == x);
    
    }
};

