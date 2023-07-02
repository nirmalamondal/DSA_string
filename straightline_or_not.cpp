/*You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point.
 Check if these points make a straight line in the XY plane.*/
 
#include<bits/stdc++.h>
using namespace std;


bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];
        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];
        for(int i = 2; i < coordinates.size(); i++){
            int x = coordinates[i][0];
            int y = coordinates[i][1];
            if((y - y1) * (x - x2) != (y - y2) * (x - x1)){
                return false;
            } 
        }
        return true;
    }
    
    
    
int main(){
	int t;
	cout<<"enter no. of testcases"<<endl;
	cin>>t;
	while(t--){
		int n;
		cout<<"Enter the size of vector: "<<endl;
		cin>>n;
		vector<vector<int>>v;
		vector<int>v1;
		for(int i=0;i<n;i++){
			int x;
			cout<<"Enter first X coordinate: "<<endl;
			cin>>x;
			int y;
			cout<<"Enter first Y coordinate: "<<endl;
			cin>>y;
			v1.push_back(x);
			v1.push_back(y);
		     v.push_back(v1);
		}
			if(checkStraightLine(v))
			  cout<<"True"<<endl;
			else
			  cout<<"False"<<endl;   
	}
	
	return 0;
}    
