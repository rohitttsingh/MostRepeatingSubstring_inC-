// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
string fun(string s){
    string ans;
    vector <string> a[s.length()];
    for(int i=1;i<s.length();i++){
        for(int j=0;j<s.length();j+=i)
            a[i].push_back(s.substr(j,i));
    }
    int breaker=0;
    for(int i=0;i<s.length();i++){
        if(breaker ==1 ) break;
        for(int j=0;j<a[i].size();j++){
            if(a[i][j]==a[i][j+1]&&a[i][j+1]==a[i][j+2]){
                ans = a[i][j];
                breaker =1;
                break;
            }
        }
            
    }
    
    return ans;
    
}
int main() {
    
    string s = "ansansansansans";
    
  cout<<"Repeating substring is: "<<fun(s);

    return 0;
}
