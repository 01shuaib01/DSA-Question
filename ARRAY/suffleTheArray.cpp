int i=0,j=n;
    vector <int> ans;
    while(j<nums.size()){
        ans.push_back(nums[i++]);
        ans.push_back(nums[j++]);
    }