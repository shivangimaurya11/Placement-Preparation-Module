class Solution {
public:
    vector<vector<int>>ans;
    void solve(int index,int n,int k,vector<int>&ds)
    {
        if(ds.size()==k)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=index;i<n+1;i++)
        {
            ds.push_back(i);
            solve(i+1,n,k,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>ds;
        solve(1,n,k,ds);
        return ans;
    }
};