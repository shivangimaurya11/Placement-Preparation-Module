class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int left=0,right=m-1;
        int top=0,bottom=n-1;
        int direction=1;
        vector<int>v;
        while(left<=right && top<=bottom)
        {
            if(direction==1)
            {
                for(int i=left;i<=right;i++)
                    v.push_back(matrix[top][i]);
                top++;
                direction=2;
            }
            else if(direction==2)
            {
                for(int i=top;i<=bottom;i++)
                    v.push_back(matrix[i][right]);
                right--;
                direction=3;
            }
            else if(direction==3)
            {
                for(int i=right;i>=left;i--)
                    v.push_back(matrix[bottom][i]);
                bottom--;
                direction=4;
                
            }
            else if(direction==4)
            {
                for(int i=bottom;i>=top;i--)
                    v.push_back(matrix[i][left]);
                left++;
                direction=1;
            }
        }
        return v;
    }
};