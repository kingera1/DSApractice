class Solution {
public:
    int mySqrt(int x){
        long long l = 0 , h = x/2, m =0 , sqr=0;
        if(x==1) return x;
        
        while(l<=h){    
            m = l+(h-l)/2;
            sqr = m*m;
            if(sqr==x) return m;
            else if (l==h && sqr>x) return m-1;
            else if(sqr<x) l= m+1;
            else h= m;
        }
        return m;
    }
};
