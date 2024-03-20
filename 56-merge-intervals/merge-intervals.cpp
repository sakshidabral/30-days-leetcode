class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& interval) {
        vector<vector<int>> v;
        int n=interval.size();
        sort(interval.begin(),interval.end());
        int x=interval[0][0], y=interval[0][1];
        for(int i=1;i<n;i++){
            if(interval[i][0]<=y){
                x=min(x,interval[i][0]);
                y=max(y,interval[i][1]);
            }
            else{
                v.push_back({x,y});
                x=interval[i][0];
                y=interval[i][1];
            }
        }
        v.push_back({x,y});
        return v;
    }
};