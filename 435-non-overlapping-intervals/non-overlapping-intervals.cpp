class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& interval) {
        int ans=0;
        int n=interval.size();
        sort(interval.begin(),interval.end());
        int prev=interval[0][1];
        for(int i=1 ; i<n ; i++){
            if(interval[i][0]<prev){
                ans++;
                prev=min(prev,interval[i][1]);
            } else prev=interval[i][1];
        }
        return ans;
    }
};