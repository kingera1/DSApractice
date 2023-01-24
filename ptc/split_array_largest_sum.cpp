class Solution {
public:
    bool count(vector<int>& nums, int m, int mid){
    int sm=0, c=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]+sm<=mid)
            sm += nums[i];
        else{
            sm = 0;
            sm += nums[i];
            c++;
        }
    }
    if(sm>0)
        c++;
    return c<=m;
}

int splitArray(vector<int>& nums, int m) {
    int start=*max_element(nums.begin(), nums.end()), end=accumulate(nums.begin(), nums.end(), 0);
    int mn = 0;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(count(nums, m, mid)){
            mn = mid;
            end = mid-1;
        }
        else
            start = mid+1;
    }
    return mn;
}
};
