/*Given two strings s and t, return true *if they are equal when both are typed into empty text editors*. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

**Example 1:**

**Input:** s = "ab#c", t = "ad#c"

**Output:** true

**Explanation:**

Both s and t become "ac".*/

#include<bits/stdc++.h>
using namespace std;


bool backspaceCompare(string s, string t) {
        stack<int>s1;
        stack<int>s2;
        string ans1="";
        string ans2="";
        for(int i=0;i<s.size();i++){
            if(s[i] != '#')
            {
                s1.push(s[i]);
                continue;
            }
            else{
                if(!s1.empty())
                 s1.pop();
            }
        }
        
        for(int i=0;i<t.size();i++){
            if(t[i] != '#')
            {
                s2.push(t[i]);
                continue;
            }
            else{
                if(!s2.empty())
                s2.pop();
            }
        }
        
        return s1==s2;
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
		if(backspaceCompare(s,t))
		  cout<<"True"<<endl;
		else
		  cout<<"False"<<endl;  
		
		
	}
	return 0;
}        
