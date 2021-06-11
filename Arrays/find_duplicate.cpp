// Naive - O(nLogn)
int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; i++)
            if(nums[i] == nums[i+1])
                return nums[i];
        
        return -1;
}

// Better : Using Boolean Visited array 
// T = O(n) S = O(n)
int findDuplicate(vector<int>& nums) {
	int n = nums.size();
        vector<bool> visited(n+1, false);
        for(int x : nums) {
            if(visited[x])
                return x;
            visited[x] = true;
        }
        
        return -1;
}

// Best = Using Loop in a LL Approach
// T = O(n) s = O(1)
int findDuplicate(vector<int>& nums) {
        if (nums.size() > 1)
        {
            int slow = nums[0];
            int fast = nums[nums[0]];
            while (slow != fast)
            {
                slow = nums[slow];
                fast = nums[nums[fast]];
            }

            fast = 0;
            
            while (fast != slow)
            {
                fast = nums[fast];
                slow = nums[slow];
            }
            return slow;
        }
        
	    return -1;
}

