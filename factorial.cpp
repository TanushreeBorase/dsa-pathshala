#include <bits/stdc++.h>
using namespace std;

 factorial(int n)
{
// base condition
  if(n == 0)
  {
      return 1;
  }

  return n*factorial(n - 1);
}


int main()
{
    int n = 1;

    cout << " The factorial of a number : " << n << factorial(n);
}

