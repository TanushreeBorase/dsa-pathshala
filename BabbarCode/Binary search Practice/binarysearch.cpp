#include<iostream>
using namespace std;

int binary_search(int array[],int low,int high,int element){
    if(high > low){
        int x = low + (high - low) / 2;
        if(array[x] == element){
            return x;
        }
        else if(array[x]< element){
            return binary_search(array,x+1,high,element);
        }
        else if(array[x]>element){
            return binary_search(array,x+1,high,element);
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter the number of elements: " << endl;
    cin >> n;

    int a[n];
    cout << "The array elements are: " << endl;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    cout << "Array is: " << endl;
    for(int i=0;i<n;i++){
        cout << a[i] << endl;
    }

    int l=0;
    int h = n-1;
    int f;

    cout << "Enter the element to be found: " << endl;
    cin >> f;

    int b = binary_search(a,l,h,f);
    if(b == -1){
        cout << "The element is not found "<<endl;
    }
    else{
        cout << "The element is found at index " << b << endl;
    }


    return 0;

}
