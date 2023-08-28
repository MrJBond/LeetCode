class Solution {
public:

    // 50/61 using vector

    /*int min(int a, int b){
        if(a<b)
            return a;
        return b;
    } 
    int max(vector<int> v){
        sort(v.begin(), v.end());
        return v[v.size()-1];
    }
    int maxArea(vector<int>& height) {
        vector<int> v;
        for(int i=0; i<height.size(); i++){
            for(int j = i+1; j<height.size(); j++){
                v.push_back((j-i)*min(height[i],height[j]));
            }
        }
        return max(v);
    }*/


// 54 / 61 testcases using two loops

/*int maxArea(vector<int>& height) {
    int max = 0;

    for(int i=0; i<height.size(); i++){
        for(int j=i+1; j < height.size(); j++){
            int v = min(height[i], height[j]) * (j-i);

            if(v > max){
                max = v;
            }
        }
    }
    return max;
}*/

// using two pointers

int maxArea(vector<int>& height) {
    int i = 0;
    int j = height.size()-1;
    int max = 0;
    
    while(i<j){
        if(height[i] < height[j]){
            if(max < height[i]*(j-i))
                max = height[i]*(j-i);
                i++;
        }
        else{
            if(max < height[j]*(j-i))
                max = height[j]*(j-i);
                j--;
        }
    }
    return max;
}

};