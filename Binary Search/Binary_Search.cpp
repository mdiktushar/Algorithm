#include<bits/stdc++.h>
using namespace std;

int binarysearch(int *arr, int s, int n, int f);

int main()
{
    cout<<"Enter the number of elements: ";
    int n; cin>>n;
    int arr[n];
    for(auto i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Value to Search: ";
    int f;cin>>f;
    f = binarysearch(arr, 0, n, f);
    if(f == -1)
        cout<<"\nNot Found.....!!!!"<<endl;
    else
        cout<<"\nFound at index "<<++f<<endl;
    return 0;
}

int binarysearch(int *arr, int s, int n, int f){
    if(n>=s){
        int mid = s+(n-s)/2;
        if(arr[mid]==f)
            return mid;
        else if(arr[mid]<f)
            return binarysearch(arr, mid+1, n, f);
        return binarysearch(arr, s, mid-1, f);
    }
    return -1;
}
