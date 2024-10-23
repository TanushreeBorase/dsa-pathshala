#include<iostream>
using namespace std;

inline int maximum(int a,int b){
    return (a>b) ? a:b;
}

int main(){
    int a,b;
    cin >> a >> b;
    
    int answer = maximum(3,5);
    cout << "Maximum number is: " << answer ;
}