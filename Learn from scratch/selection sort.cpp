#include<iostream>
using namespace std;

void selectionsort(int a[],int n){
    for(int i=0;i <n-1;i++){
        int min_index = i;
        for(int j=i+1;j < n;j++){
            if(a[j] < a[min_index]){
                min_index = j;
            }
        }
        int temp = a[min_index];
        a[min_index] = a[i];
        a[i] = temp;
    }
}

int main(){
    int n;
    cout << "Enter the number of elements:  " << endl;
    cin >> n;

    int a[n];
    cout << "Enter the elements: " << endl;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    cout << "The unsorted array: " << endl;
    for(int i=0;i<n;i++){
        cout <<  a[i] << "  ";
    }cout << endl;

    selectionsort(a,n);

    cout << "The sorted array is: " << endl;
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }

    return 0;
}
