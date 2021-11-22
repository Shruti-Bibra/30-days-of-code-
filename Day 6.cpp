#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int n=s.size() ;
    
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            cout<<s[i];
        }
    } 
    
    cout<<" ";
    
    for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            cout<<s[i];
        }
    } 
      cout<<endl;
    } 
    return 0;
}
