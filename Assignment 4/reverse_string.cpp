class Solution {
public:
    void reverseString(vector<char>& s) {
        int k;
        k=s.size();
        k=k/2;
        for(int i=0;i<k;i++){
            swap(s[i],s[s.size()-i-1]);
        }
        for(int i=0;i<s.size();i++){
            cout<<s[i];
        }
    }
    
};
