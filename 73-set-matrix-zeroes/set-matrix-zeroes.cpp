class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> m=matrix;
        int r=matrix.size(), c=matrix[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    change(i,j,m);
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
            swap(matrix[i][j],m[i][j]);
        }
    }
    void change(int i, int j, vector<vector<int>>& m){
        for(int r=0;r<m.size();r++){
            m[r][j]=0;
        }
        for(int c=0;c<m[0].size();c++){
            m[i][c]=0;
        }
    }
};