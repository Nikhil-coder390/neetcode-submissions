class Solution {
    public int[] productExceptSelf(int[] nums) {
        int size = nums.length;
        int[] prefixProd = new int[size];
        int[] suffixProd = new int[size];
        int[] res = new int[size];
        prefixProd[0] = 1;
        suffixProd[size-1] = 1;
        for(int i=1;i<size;i++){
            prefixProd[i] = nums[i-1] * prefixProd[i-1];
        } 
        for(int j=size-2;j>=0;j--){
            suffixProd[j] = nums[j+1] * suffixProd[j+1];
        }
        for(int i=0;i<size;i++){
            res[i] = prefixProd[i]*suffixProd[i];
        }
        return res;
    }
}  
