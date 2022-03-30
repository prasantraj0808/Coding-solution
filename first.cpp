class Solution {
public:
    vector<pair<int,int>> merge(vector<pair<int,int>>& intervals) {
       sort(intervals.begin(),intervals.end());
        stack<pair<int,int>> s;
        s.push({intervals[0].first,intervals[0].second});
        for(int i=1;i<intervals.size();i++)
        {
            int start1=s.top().first;
            int end1=s.top().second;
            int start2=intervals[i].first;
            int end2=intervals[i].second;
            if(end1>start2)
            {
                s.push({start2,end2});
            }
            else
            {
                s.pop();
                end1=max(end1,end2);
                s.push({start1,end1});
                
            }
        }
        vector<pair<int,int>> ans;
        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
        
    }
};