class Solution {
public:
void sorter(vector<int>& ar, int size){
    int temp;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
        if(ar[i]>ar[j]){
            temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
        } 
        }
    }
    }

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
 
    int j = m;
    for(int i = 0; i<n; i++){
        nums1[j] = nums2[i];
        j++; 
    }
    sorter(nums1, m+n);
    }
};