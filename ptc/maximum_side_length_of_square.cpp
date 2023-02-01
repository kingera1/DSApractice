class Solution {
public:
    bool find(vector<vector<int>> & prefix, int threshold, int w){
        int m = prefix.size();
        int n = prefix[0].size();
        
        for(int i = 0; i<=m-w; i++){
            for(int j = 0; j<=n-w; j++){
                int x = i+w-1; 
                int y = j+w-1;
                int leftTop = (i>=1 && j>=1)? prefix[i-1][j-1]:0;
                int top = (i>=1)? prefix[i-1][y]:0; 
                int left = (j>=1)? prefix[x][j-1]:0;
                int sum = prefix[x][y] - top - left + leftTop;
                if(sum<= threshold)
                    return true;  
                
            }
        }
        
        return false; 
    }
    
    
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int m = mat.size();
        if(m==0) return 0; 
        int n = mat[0].size();
        if(n ==0) return 0; 
        
        vector<vector<int>> prefix(m, vector<int>(n, 0));
         
        for(int i =0; i<m; i++){
            for(int j = 0; j<n; j++)
              prefix[i][j] = ((i>0) ? prefix[i-1][j]:0) + mat[i][j];
        }
        
        for(int j=0; j<n; j++){
            for(int i=0; i< m; i++)
              prefix[i][j] = ((j>0)? prefix[i][j-1]:0) + prefix[i][j];
        }
        
        
        int r = min(m, n);
        int l = 1;
        int res = 0; 
        while(l<=r){
            int middle = l + (r-l)/2;
            if(find(prefix, threshold, middle)){
                res = max(res, middle);
                l= middle+1; 
            }
            else {
                r = middle -1; 
            }            
        }         
    
        
         
        return res;   
    }
};
