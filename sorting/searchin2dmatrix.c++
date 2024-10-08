#include <bits/stdc++.h>
using namespace std;


bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix[0].size();
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0]>target) return false;
            else if(matrix[i][m-1]<target) continue;
            int l=0,h=m-1;
            while(l<=h){
                int mid=l+(h-l)/2;
                if(matrix[i][mid]==target) return true;
                else if(matrix[i][mid]<target) l=mid+1;
                else h=mid-1;
            }
        }
        return false;
    }

    int main(){
        int r,c;
        cin>>r>>c;
        vector<vector<int>>d(r,vector<int>(c));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>d[i][j];
            }
        }
        int t;
        cout<<"target ";
        cin>>t;
        cout<<searchMatrix(d,t);
        return 0;
    }