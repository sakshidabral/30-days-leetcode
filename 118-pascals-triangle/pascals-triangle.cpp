class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> v(n);
        for(int i=0;i<n;i++){
            vector<int> row(i+1);
            for(int j=0;j<=i;j++){
                if(j==0 || j==i) row[j]=1;
                else{
                    int num=v[i-1][j]+v[i-1][j-1];
                    row[j]=num;
                }
            }
            v[i]=row;
        }
        return v;
    }
};