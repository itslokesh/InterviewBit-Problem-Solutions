public class MaxSumContiguousArray {
    // DO NOT MODIFY THE LIST. IT IS READ ONLY
    public static int max(int a,int b){
        if(a>b)
            return a;
        return b;
    }
    public int maxSubArray(final List<Integer> A) {
        int max_here=A.get(0);
        int max_global=A.get(0);
        for(int i=1;i<A.size();i++){
            max_here=max(A.get(i),A.get(i)+max_here);
            max_global=max(max_global,max_here);
        }
        return max_global;
    }
}
