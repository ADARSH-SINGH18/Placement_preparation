/*The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

For example, the next permutation of arr = [1,2,3] is [1,3,2].*/
// leetcode ,gfg, devnest

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size()-1,i,j;
        for( i=n-1;i>=0;i--){
            if(nums[i]<nums[i+1])
                break;
        }
        if(i<0) reverse(nums.begin(),nums.end());
        else{
            for( j=n;j>i;j--){
                if(nums[j]>nums[i]) break;
            }
            swap(nums[i],nums[j]);
            reverse(nums.begin()+i+1,nums.end());
        }
    }
};
