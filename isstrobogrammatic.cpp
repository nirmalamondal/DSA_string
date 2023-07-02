/*Given a string num which represents an integer, return true *if* num *is a **strobogrammatic number***.

A **strobogrammatic number** is a number that looks the same when rotated 180 degrees (looked at upside down).

**Example 1:**

**Input:** num = "69"

**Output:**

true
*/
#include<bits/stdc++.h>
using namespace std;



bool isStrobogrammatic(string s) {
bool flag =true;    
for(int i=0;i<s.length();i++){
    if(s[i]=='0' ||s[i]=='1'||s[i]=='6'||s[i]=='8'|| s[i]=='9' )
      {
         	continue;
	   } 
	   else
	      {
	      	flag = false ;
	      	break;
		  }
    }
    return flag;
    }
    
    
int main(){
	int t;
	cout<<"enter no. of testcases"<<endl;
	cin>>t;
	while(t--){
		string s,t;
		cout<<"Enter string s: ";
		cin>>s;
		if(isStrobogrammatic(s))
		  cout<<"True"<<endl;
		else
		  cout<<"False"<<endl;  
		
		
	}
	return 0;
}    
