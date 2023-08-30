class Solution {

    // first solution

    /*public int mySqrt(int x) {
        for(long i = 0; i<=x; i++){
            if(i*i == x){
                return (int)i;
            }
            else if(i*i > x){
                return (int)(i-1);
            }
        }
        return 0;
    }*/

    // second solution
    public int mySqrt(int x) {
        long first = 0;
        long last = x;

   while(first <= last){
        long mid = (first + last)/2;
        
        if(mid*mid == x){
            return (int)mid;
        }
        if(mid*mid < x && (mid+1)*(mid+1) > x){
            return (int)mid;
        }
        if(mid*mid < x && (mid+1)*(mid+1) == x){
            return (int)mid+1;
        }
        
        if((mid)*(mid) > x){
            last = mid-1;
        }
        if((mid-1)*(mid-1) == x){
            return (int)mid-1;
        }
        
        if(mid*mid < x && (mid+1)*(mid+1) < x){
            first = mid+1;
        }
        
    }
        return 0;
    }
}