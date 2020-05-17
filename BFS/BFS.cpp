#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Number of Vertex: ";
    int n;cin>>n;
    vector<int>v[n],vr;
    queue<int>Q;
    for(int i=0; i<n; i++)
    {
        cout<<"Number of joins: "<<i<<": ";
        int N;cin>>N;
        if(N!=0)cout<<"Connected to: ";
        while(N--)
        {
            int I;cin>>I;
            v[i].push_back(I);
        }
    }
    cout<<"Starting State: ";
    int s;cin>>s;
    Q.push(s);
    vr.push_back(s);
    while(Q.size()!=0)
    {
        for(auto it : v[Q.front()])
        {
            auto f = find(vr.begin(),vr.end(),it);

            if(f==vr.end())
            {
                Q.push(it);
                vr.push_back(it);
            }
        }
        Q.pop();
    }
    for(auto it : vr)
        cout<<it<<' ';

    return 0;
}
