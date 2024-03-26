class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size(), c=matrix[0].size();
        unordered_set<int> setRow;
        unordered_set<int> setCol;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    setRow.insert(i);
                    setCol.insert(j);
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(setRow.count(i)>0 || setCol.count(j)>0)
                matrix[i][j]=0;
            }
        }
    }
};