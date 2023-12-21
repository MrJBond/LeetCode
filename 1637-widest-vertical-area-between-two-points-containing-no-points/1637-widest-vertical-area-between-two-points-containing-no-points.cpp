class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        
        vector<int> xs;

        for(int i = 0; i<points.size(); i++){
            xs.push_back(points[i][0]);
        }
        sort(xs.begin(),xs.end());

        int maxDif = 0;

        for(int i = 0; i<xs.size()-1; i++){
            int dif = xs[i+1] - xs[i];
            if(dif > maxDif){
                maxDif = dif;
            }
        }
        return maxDif;
        
    }
};