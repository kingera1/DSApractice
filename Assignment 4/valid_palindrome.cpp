class Solution {
public:
    bool isPalindrome(string s) {
         transform(s.begin(), s.end(), s.begin(), ::tolower);
         
         string c;
         for(char a: s)  {
           if(isalnum(a))
             c += a;
          }
        
        string b = c;
        int n = c.size();
         for (int j=0;j<n/2;j++){
         swap(c[j],c[n-1-j]);
          }
        if ( c==b) return 1;
     return 0;
    }
};
