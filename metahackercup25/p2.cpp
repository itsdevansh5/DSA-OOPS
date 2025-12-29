#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
        int n;
        cout<<endl;
        cin>>n;

        vector<int>arr;
        arr.push_back(0);
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            arr.push_back(a);
        }
        int maxv=INT_MIN;
       for(int i=1;i<arr.size();i++){
        int a=arr[i];
        int b=arr[i-1];
        int val=min(abs(a-b),arr[i]);
        if(val>maxv)
        maxv=val;
        
       }
       if(n==1)
       maxv=0;
       
       cout<<"Case #"<<j<<": "<<maxv<<endl;

    }
    return 0;
}