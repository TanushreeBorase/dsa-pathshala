#include <iostream>
#include <array>
using namespace std;

int main() {
	array <int , 3> arr={'G','f','G'};
	cout<<arr[0] <<" "<<arr[2] << endl;
	
	cout<<arr.front() <<" "<<arr.back() << endl;
	array <int , 3> arr1={'M','M','P'}; // ASCII val of 'M' = 77 and 'P' = 80
	
    arr.swap(arr1);  // now arr = {M,M,P}
    cout<<arr.front() <<" "<<arr.back() << endl;
    
    bool x = arr.empty(); // false ( not empty)
    cout<<boolalpha<<(x) << endl;
    
    
	return 0;
}
