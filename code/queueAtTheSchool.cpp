#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    char s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    
    while(t--)
    {
        for(int i=1;i<n;i++){
        if(s[i]=='G' && s[i-1]=='B'){
            swap(s[i],s[i-1]);
                i++;
        }
    }
    }
    for(int i = 0 ; i<n ; i++)
    {
      cout<<s[i];
    }
cout<<endl;
}