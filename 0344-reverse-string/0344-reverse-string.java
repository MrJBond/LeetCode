class Solution {

    // O(n^2)
    /*public void reverseString(char[] s) {
        char temp;
        for(int i=0; i<s.length; i++){
            for(int j=i+1; j<s.length; j++){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }*/

    // O(n)
    public void reverseString(char[] s) {
        char ar[];
        ar = new char[s.length];

        for(int i = s.length-1; i!=-1; i--){
            ar[Math.abs(i-s.length+1)] = s[i];
        }
        for(int i=0; i<s.length; i++){
            s[i] = ar[i];
        }


    }
}