#include <iostream>
using namespace std;

void sol
{
    int n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int key, i, j;
    
    for (int i =1; i<n; i++)
    {
        j = i-1;
        int key = arr[i];

        while ( j>=0 && a[j]>key)
        {
            arr[j+1] = arr[j];
            j = j-1;  
        }
        arr[j+1] = key;
    } 


 int main (){
#ifndef ONLINE_JUDGE
    freopen(".txt", "r", stdin);
    freopen(".txt", "w", stdout);

#endif 
    
    int t;
     cin>> t;
     while (t--)
     {
         solve();
     }
     return 0;
}   

    
    
}