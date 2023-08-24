class Solution {
public:

 // first: using loop

 /*int mySqrt(int x) {
    for(long int i=0; i<=x; i++){
        if(i*i == x){
            return i;
        }
        else if(i*i>x){
            return i-1;
        }
    }
    return 0;
}*/

    
// second: using binary search

int mySqrt(int x){

    long int first = 0;
    long int last = x;
    
    while(first <= last){
        long int mid = (first + last)/2;
        
        if(mid*mid == x){
            return mid;
        }
        if(mid*mid < x && (mid+1)*(mid+1) > x){
            return mid;
        }
        if(mid*mid < x && (mid+1)*(mid+1) == x){
            return mid+1;
        }
        
        if((mid)*(mid) > x){
            last = mid-1;
        }
        if((mid-1)*(mid-1) == x){
            return mid-1;
        }
        
        if(mid*mid < x && (mid+1)*(mid+1) < x){
            first = mid+1;
        }
        
    }
    return 0;
}
};