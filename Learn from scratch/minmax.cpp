#include<iostream>
#include<climits>
using namespace std;

int mini(int arr[],int n)
{
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]< min){
            min= arr[i];
        }
    }
    return min;
}

int maxi(int arr[],int n)
{
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]> max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "The minimum value of array is " << mini(arr,n) << endl;
    cout << "The maximum value of array is " << maxi(arr,n) << endl;

    return 0;
}
