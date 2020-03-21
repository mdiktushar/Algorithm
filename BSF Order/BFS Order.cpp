#include<bits/stdc++.h>
using namespace std;

/**
    Md. Imrul Kayes
    Date: 22/03/2020
    Time: 01:01 Am (GMT+6)
**/
int test(int s, int n){
    if(s>=n){
        cout<<"Entry Error..!!!!"<<endl;
        return -1;
    }
    else s;
}

int test1(int s, int n){
    if(s>n){
        cout<<"Entry Error..!!!!"<<endl;
        return -1;
    }
    else s;
}

int main()
{
    int n;
    cout<<"number of vertex: ";
    cin>>n;
    vector<int> V[n];

    for(int i=0; i<n; i++){
        cout<<"For vertex "<<i<<" input the number of edge: ";
        int N;cin>>N;
        N = test1(N,n);
        if(N==-1)return 0;
        if(N!=0)cout<<"Enter: ";
            while(N--){
                int num;cin>>num;
                num = test(num,n);
                if(num == -1)return 0;
                V[i].push_back(num);
            }
    }
    cout<<"Enter the Starting state: ";
    int s; cin>>s;
    s = test(s, n);
    if(s==-1)return 0;

    queue<int> Q;
    Q.push(s);
    bool flag[n];
    for(int i=0; i<n; i++)flag[i]=false;
    int I=n;
    cout<<"BFS Order: ";
    while(I != 0){
        int i=Q.front();
        int N = V[i].size();
        if(flag[i] == false){
            for(int j=0; j<N; j++)
                Q.push(V[i][j]);
        }
        if(flag[i] == false){
            cout<<i<<' ';
            I--;
            flag[i] = true;
        }
        Q.pop();
        int s = Q.size();
        if(s==0)break;
    }
    Q.empty();
    return 0;
}
