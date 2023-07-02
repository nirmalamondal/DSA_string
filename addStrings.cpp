/*
Given two non-negative integers, num1 and num2 represented as string, return *the sum of* num1 *and* num2 *as a string*.

You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

**Example 1:**

**Input:** num1 = "11", num2 = "123"

**Output:**

"134"*/

#include<bits/stdc++.h>
using namespace std;

string addStrings(string num1, string num2) {
         int a = 0,mult = 1,b=0;
         for(int i= num1.size() -1 ;i>=0;i--){
            a += (num1[i] - '0') * mult;
            mult *= 10;
         }
         mult =1;
         for(int i= num2.size() -1 ;i>=0;i--){
            b += (num2[i] - '0') * mult;
            mult *= 10;
         }
         /*a = stoi(num1);
         b = stoi(num2);*/
         return to_string(a+b);
    }
    
    
int main(){
	int t;
	cout<<"enter no. of testcases"<<endl;
	cin>>t;
	while(t--){
		string s1,s2;
		cout<<"Enter string s1: ";
		cin>>s1;
		cout<<"Enter string s2: ";
		cin>>s2;
		
		  
		  cout<<addStrings(s1,s2)<<endl;  
		
		
	}
	return 0;
}        
