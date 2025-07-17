#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cout<<"enter pattern number : ";
    cin>>n;
    int l,r,t,d;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            l=j;
            r=(2*n-2)-j;
            t=i;
            d=(2*n-2)-i;
            if(l<=r && l<=t && l<=d)
            cout<<(4-l);
            else if(r<=l && r<=t && r<=d )
            cout<<(4-r);
            else if(t<=l && t<=r && t<=d)
            cout<<(4-t);
            else if(d<=l && d<=r && d<=t)
            cout<<(4-d);

        

            
        }
        cout<<endl;

        
    }

    

        


            

           return 0;
           
        }
    
