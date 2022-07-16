class Solution {
public:
	int firstBadVersion(int n) {
		int l=0;
		while(l<=n)
		{
			int mid = l + (n-l)/2;
			if(isBadVersion(mid)) n = mid-1;
			else l = mid+1;
		}
		return l;
	}
};
