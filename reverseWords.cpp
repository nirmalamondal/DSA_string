/*Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

**Input:** s = "Let's take LeetCode contest"

**Output:** "s'teL ekat edoCteeL tsetnoc"
 */

#include<bits/stdc++.h>
using namespace std;



string reverseWords(string s) {
    string ans = "";    
    stack<char> st;
    for (int i=0;i<s.length();i++) {
        if (s[i] !=' ')
            st.push(s[i]);
        else {
            while (st.empty() == false) {
                ans += st.top();
                st.pop();
            }
            ans += " ";
        }
    }
 
    while (st.empty() == false) {
      ans += st.top();
        st.pop();
    }
    return ans;
    }
    
int main(){
	int t;
	cout<<"enter no. of testcases"<<endl;
	cin>>t;
	while(t--){
		string s;
		cout<<"Enter string s:";
		getline(cin,s);
		string ans = reverseWords(s);			
		cout<<ans<<endl;
	}
	
	return 0;
}        
