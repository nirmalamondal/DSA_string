
#include<bits/stdc++.h>
using namespace std;



bool isIsomorphic(string s, string t) {
    int a[256]{0}, b[256]{0};
for(int i=0;i<s.length();i++){
    if(a[s[i]] != b[t[i]] )
      return false;
     a[s[i]] = i+1;
     b[t[i]] = i+1; 
}
    return true;
    }
    
    
int main(){
	int t;
	cout<<"enter no. of testcases"<<endl;
	cin>>t;
	while(t--){
		string s,t;
		cout<<"Enter string s: ";
		cin>>s;
		cout<<"Enter string t: ";
		cin>>t;
		if(isIsomorphic(s,t))
		  cout<<"True"<<endl;
		else
		  cout<<"False"<<endl;  
		
		
	}
	return 0;
}    
