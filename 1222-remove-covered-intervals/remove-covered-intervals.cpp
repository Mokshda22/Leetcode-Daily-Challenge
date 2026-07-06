class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n= intervals.size();

       auto lamba = [](vector<int> vec1, vector<int> vec2){
        if(vec1[0]== vec2[0]){
            return vec1[1]> vec2[1];
        }
        return vec1[0]<vec2[0];
       };

        sort(begin(intervals), end(intervals), lamba);

        int lastIntervalKaEnd= intervals[0][1];
        int cnt=1;
        for(int i=0;i<n;i++){
            if(lastIntervalKaEnd>= intervals[i][1]){
                continue;
            }
            lastIntervalKaEnd= intervals[i][1];
            cnt++;
        }
        return cnt;
    }
};