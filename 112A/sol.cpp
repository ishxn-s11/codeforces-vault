#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    string s,t;
    cin>>s>>t;
    
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
        t[i]=tolower(t[i]);
        if(s[i]<t[i]){
            cout<<"-1";
            
            return 0;
        }
        
        else if(s[i]>t[i]){
            cout<<"1";
            
            return 0;
        }
    }
    
    cout<<"0";
    
    return 0;
}
