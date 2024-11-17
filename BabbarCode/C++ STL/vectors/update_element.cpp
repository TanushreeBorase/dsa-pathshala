#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> v = {'a', 'c', 'f', 'd', 'z'};

    // Updating values using indexes 3 and 2
      v[3] = 'D';
      v.at(2) = 'F';
      
      cout << v[3] << endl;
      cout << v.at(2);
  
    return 0;
}
