 #include<iostream>
#include<vector>
 using namespace std;
 
         void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        //
        int idx=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
           idx=i;
           break;
            }
        }
        if(idx==-1){ //
       reverse( nums.begin(),nums.end());
       return;
        }
        //2 sorting/revrese sfter pivot
        reverse(nums.begin()+idx+1,nums.end());
        //3
        int j=-1;
        for(int i=idx+1;i<n;i++){
            if(nums[i]>nums[idx]){
                j=i;
                break;
            }
        }
        // 4 swapping idx and idx+1
        int temp = nums[idx];
        nums[idx]=nums[idx+1];
        nums[idx+1]=temp;
        return;
    }

int main(){
    vector<int> num;
    void nextPermutation(vector<int>& nums);
}
