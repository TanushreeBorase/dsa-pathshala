#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    int b;
    cin >> a >> b;
    string num[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    for(int i=a;i<=b;i++){
        if(i>=1 && i<=9)
            cout << num[i] << endl;
        else 
            if(i>9 && i%2 == 0){
                cout << "even" << endl;
            }
            else if (i>9 && i%2 != 0){
                cout << "odd" << endl;
            }
    }
    
    return 0;
}
/*
Output Format

For each integer  in the inclusive interval :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
*/
