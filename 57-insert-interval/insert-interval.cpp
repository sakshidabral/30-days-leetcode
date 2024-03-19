class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& interval, vector<int>& newInterval) {
        vector<vector<int>> ans;
        int n=interval.size(), i=0;
        while(i<n && interval[i][1]<newInterval[0]){
            //intervals which are not overlapping & less than new interval
            ans.push_back(interval[i++]);
        }
        //insert new interval
        while(i<n && newInterval[1]>=interval[i][0]){
            newInterval[0]=min(newInterval[0],interval[i][0]);
            newInterval[1]=max(newInterval[1],interval[i][1]);
            i++;
        }
        ans.push_back(newInterval);
        while(i<n) ans.push_back(interval[i++]);
        return ans;
    }
};