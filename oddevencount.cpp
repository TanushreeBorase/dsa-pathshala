#include<stdc++.h>
using namespace std;

void count EvenOdd(inta[], int n)
{
    even_count = 0;
    odd_count = 0;

    for(int i = 0; i < n;i++)
    {
        if(a[i] % 2 == 0)
        {
            even_count += 1;
        }
        else
        {
            odd_count += 1;
        }
    }

    cout << "The number of even elements are: " << even_count << endl;
    cout << "The number of odd elements are: " << odd_count << endl;
    
}



int main()
{

    int a[] = {1,3,2,4,6};

    int n = sizeof(a)/sizeof(a[0]);

    countEvenOdd(a,n)

}