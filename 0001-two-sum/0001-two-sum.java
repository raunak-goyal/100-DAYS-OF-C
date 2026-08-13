class Solution {
    public int[] twoSum(int[] nums, int target) {
     
      
     for(int i=0;i<nums.length;i++){
        
        int sum =0;
            sum +=nums[i];
            int diff= target - sum;
            for(int j=i+1;j<nums.length;j++){
            if(nums[j] == diff){
                return new int[]{i, j};

            }
            
            }
     }
        return new int[]{};
    

    }
   
}