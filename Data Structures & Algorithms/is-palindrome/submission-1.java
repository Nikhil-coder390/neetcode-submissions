class Solution {
    public boolean isPalindrome(String s) {
        String str = s.replaceAll("[^a-zA-Z0-9]","");
        String res = str.toLowerCase();
        int l = 0, r = str.length()-1;
        while(l<r){
            if(res.charAt(l)!=res.charAt(r)) return false;
            l++;
            r--;
        }
        return true;
    }
}
