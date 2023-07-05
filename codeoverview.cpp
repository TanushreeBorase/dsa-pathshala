#include<bits/stdc++.h>
using namespace std;

private static int binarysearch(int [] array, int k)
{
    int n = array.length;
    int s = 0;
    int e = n - 1;

    while(s <= e)
    {
        // Compute mid
        int mid = (s+e)/2;
        // Go right 
        if(array[mid] < K)
        {
            s = mid + 1;
        }

        // Go left
        {
            else if(array[mid] > k)
            {
                e = mid - 1;
            }
            // Equal
            else
            {
                return mid;
            }
        }
        
        }    return -1;
}