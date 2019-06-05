#include<bits/stdc++.h>
using namespace std;

void input(int arr [],int n)
{
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    input(a,n);
    reverse(a,a+n);
    print(a,n);
    
    return 0;
}
