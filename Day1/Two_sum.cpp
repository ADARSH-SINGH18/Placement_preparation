/*Given an array of integers nums of size n and an integer target, 
return indices of the two numbers such that they add up to target.*/
//Leectcode , devnest
vector<int> solve(int n, vector<int> nums, int target){
//CODE HERE
map<int,int> mp; 
for(int i=0;i<n;i++){
    if(mp.find(target-nums[i])!=mp.end()){
        return {mp[target-nums[i]],i};
    }
    mp[nums[i]]=i;
}
return {-1,-1};
}
