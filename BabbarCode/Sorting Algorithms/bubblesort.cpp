include<iostream>
using namespace std;

void bubblesort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]= a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
    cout << "Enter the number of elements: " << endl;
    cin >> n;

    int a[n];
    cout << "Enter the array elements: " << endl;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    cout << "The unsorted array is: " << endl;
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }

    bubblesort(a,n);
    cout << "The sorted array is: " << endl;
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }

    return 0;
}
