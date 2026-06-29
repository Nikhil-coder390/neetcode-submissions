class Solution {
    public int[] twoSum(int[] nums, int target) {
         int n = nums.length;
        HashMap<Integer, Integer> hp = new HashMap<>();
        for(int i=0;i<n;i++){
            int more = target-nums[i];
            if(hp.containsKey(more)){
                return new int[]{hp.get(more),i};
            }
            hp.put(nums[i],i);
        }
        return new int[]{0,0};
    }
}
