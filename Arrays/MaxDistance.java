public class MaxDistance {
    // DO NOT MODIFY THE LIST. IT IS READ ONLY
    public Integer max(Integer a,Integer b){
        if(a>b)
            return a;
        return b;
    }
    public Integer min(Integer a,Integer b){
        if(a<b)
            return a;
        return b;
    }
    public int maximumGap(final List<Integer> A) {
        int lmin[]=new int[A.size()];
        int rmax[]=new int[A.size()];
        lmin[0]=(A.get(0));
        rmax[A.size()-1]=A.get(A.size()-1);
        for(int i=1;i<A.size();i++){
            lmin[i]=(min(lmin[i-1],A.get(i)));
        }
        for(int i=A.size()-2;i>=0;i--){
            rmax[i]=max(rmax[i+1],A.get(i));
        }
        int maxdiff=-1;
        for(int i=0,j=0;i<A.size() && j<A.size();){
            if(lmin[i]<=rmax[j]){
                maxdiff=max(maxdiff,j-i);
                j++;
            }
            else
                i++;
        }
        return maxdiff;
    }
}
