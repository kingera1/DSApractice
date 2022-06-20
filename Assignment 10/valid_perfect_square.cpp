class Solution {
public:
    bool isPerfectSquare(int num) {
        long l= 0, h = num/2;
        if (num==1||num==2){
            return true;
            }
        while(l<=h){
            long mid = l+(h-l)/2;
            if(mid*mid==num) return true;
            else if (mid*mid>num) h = mid-1;
            else l = mid +1;
        }
        return false;
    }
};
