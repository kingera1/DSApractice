class Solution {
public:
    int search(vector<int>& n, int key) {
        int low = 0;
        int high= n.size()-1;

        while(low<=high){
            int mid = (low+high)/2;
            if(key==n[mid]){
                return mid;
            }
            else if(key<n[mid]){
                high = mid-1;
            }
            else if (key>n[mid]){
               low = mid+1;
            }
        }
        return -1;
        
    }
};
