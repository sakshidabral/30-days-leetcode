class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        vector<int> v;
        int r=m.size(), c=m[0].size();
        int size=r*c;
        int startCol=0, endCol=c-1, startRow=0, endRow=r-1;
        int count=0;
        while(count<size){
            for(int i=startCol;i<=endCol && count<size;i++){
                v.push_back(m[startRow][i]);
                count++;
            }
            startRow++;
            for(int i=startRow;i<=endRow && count<size;i++){
                v.push_back(m[i][endCol]);
                count++;
            }
            endCol--;
            for(int i=endCol;i>=startCol && count<size;i--){
                v.push_back(m[endRow][i]);
                count++;
            }
            endRow--;
            for(int i=endRow;i>=startRow && count<size;i--){
                v.push_back(m[i][startCol]);
                count++;
            }
            startCol++;
        }
        return v;
    }
};