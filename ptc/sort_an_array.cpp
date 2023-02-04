class Solution {
public:
     void merge(vector<int> &nums,int st,int mid,int end)
    {
        int i=st,j=mid+1,k=0;
        vector<int> temp(end-st+1);
        while(i<=mid and j<=end)
        {
            if(nums[i]<=nums[j])
            {
                temp[k++]=nums[i++];
            }
            else{
                temp[k++]=nums[j++];
            }
        }
        while(i<=mid)
        {
            temp[k++]=nums[i++];
        }
        while(j<=end)
        {
            temp[k++]=nums[j++];
        }
        for(int i=st;i<=end;i++)
        {
            nums[i]=temp[i-st];
        }
    }
    void merge_sort(vector<int> &nums,int st,int end)
    {
        if(st<end)
        {
            int mid=st+(end-st)/2;
            merge_sort(nums,st,mid);
            merge_sort(nums,mid+1,end);
            merge(nums,st,mid,end);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        merge_sort(nums,0,nums.size()-1);
        return nums;
    }
};
