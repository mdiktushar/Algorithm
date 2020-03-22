#include<bits/stdc++.h>
using namespace std;

/**
    Md. Imrul Kayes
    Date: 22/03/2020
    Time: 11:32 pm (GMT+6)
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

    int s; cin>>s;
    stack<int> st;
    bool flag[n];
    for(int i=0; i<n; i++) flag[i] = false;
    int I = n;
    while(I != 0){
        if(flag[s] != true){
            cout<<s<<' ';
            flag[s] = true;
            I--;
        }
        if(V[s].size() != 0){
            st.push(s);
            int temp = V[s].front();
            V[s].erase(V[s].begin());
            s = temp;
        }else{
            s = st.top();
            st.pop();
        }
    }cout<<endl;
    return 0;
}


