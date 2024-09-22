class Solution {
  private:
    bool knows(vector<vector<int>> &mat, int a, int b) {
        if(mat[a][b] == 1) 
            return true;
        else
            return false;
    }
  
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        stack<int>s;
        int n = mat.size();
        //Step 1: Push all elment in stack
        for(int i=0; i<n; i++) {
            s.push(i);
        }
        
        //Step 2: 
        while(s.size() > 1) {
            int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
            
            if(knows(mat, a, b)) {
                s.push(b);
            }
            else {
                s.push(a);
            }
            
        }
        int candidate = s.top();
        
        //step 3: Single elment in stack is potential candidate
        //So verfiy it
        
        int zeroCount = 0;
        for(int i=0; i<n; i++) {
            if(mat[candidate][i] == 0) {
                zeroCount++;
            }
        }
        
        //all zeors
        if(zeroCount != n) 
            return -1;
        
        //col check
        int oneCount = 0;
        
        for(int i=0; i<n; i++) {
            if(mat[i][candidate] == 1) {
                oneCount++;
            }
        }
        
        if(oneCount != n-1) 
            return -1;
        
        
        return candidate;
        
    }
};