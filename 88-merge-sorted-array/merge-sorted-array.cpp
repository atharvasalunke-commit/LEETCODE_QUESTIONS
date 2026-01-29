class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=nums1.size();
        if(n==0){return;}
        int j=k-1;
        int i=m-1;
      int x=n-1;
        while(i>=0&&x>=0){
            if(nums2[x]>=nums1[i]){
                nums1[j]=nums2[x];
                x--;
            }
            else{
                nums1[j]=nums1[i];
                i--;
            }
            j--;
        }
        while(x>=0){
            nums1[j]=nums2[x];
            j--;
            x--;
        }
    }
};