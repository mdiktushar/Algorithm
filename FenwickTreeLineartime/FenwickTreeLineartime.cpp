#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    n++;
    int arr[n];
    for(int i=1; i<n; i++)
    {
        cin>>arr[i];
    }

    /**
        adding all values to its parent node in below
    **/

    for(int i=1; i<n; i++)
    {
        int par = i+(i&-i);
        if(par<n)
            arr[par]+=arr[i];
    }
    ///arr is created
    int sum=0;
    int index;cin>>index;   ///addition of 1 to index value
    while(index>0)
    {
        sum+=arr[index];
        index-=index&(-index);
    }
    cout<<sum<<endl;

    return 0;
}
