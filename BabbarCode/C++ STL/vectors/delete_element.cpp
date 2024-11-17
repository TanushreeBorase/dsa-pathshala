#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> v = {'a', 'c', 'f', 'd', 'z'};

    // Deleting last element 'z'
      v.pop_back();
      for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
  
      // Deleting element 'f'
      v.erase(find(v.begin(), v.end(), 'f'));
      for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}
