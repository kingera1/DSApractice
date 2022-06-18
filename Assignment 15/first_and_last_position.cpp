class Solution {
public:
    vector<int> searchRange(vector<int>& n, int target) {
        int l, h, m;
        l = 0;
        h = n.size() - 1;
        int first = -1, last = -1;

        while(l <= h){
            m = (l + h)/2;
            if(n[m] == target){
                first = m;
                h = m - 1;
            } else if (n[m] < target){
                l = m + 1;
            } else {
                h = m-1;
            }
        }

        l = 0; h = n.size() - 1;
        while(l <= h){
            m = (l + h)/2;
            if(n[m] == target){
                last = m;
                l = m+1;
            } else if (n[m] < target){
                l = m + 1;
            } else {
                h = m-1;
            }
        }

        vector<int> res;
        res.push_back(first);
        res.push_back(last);

        return res;
    }
};
