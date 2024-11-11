#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;  // Reading the input year

  int a, b, c, d;  // Variables to hold individual digits of the year

  // Start an infinite loop to keep checking for the next year
  while(true){
    n++;  // Increment the year by 1
    a = n / 1000;    // Extract the thousand's place digit
    b = n / 100 % 10;  // Extract the hundred's place digit
    c = n / 10 % 10;   // Extract the ten's place digit
    d = n % 10;        // Extract the one's place digit

    // Check if all digits are distinct
    if(a != b && a != c && a != d && b != c && b != d && c != d){
      break;  // If all digits are distinct, exit the loop
    }
  }

  cout << n;  // Print the first year found with distinct digits
  return 0;
}
