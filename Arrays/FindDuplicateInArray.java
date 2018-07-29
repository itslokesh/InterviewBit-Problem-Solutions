public class FindDuplicateInArray {
    // DO NOT MODIFY THE LIST
    public int repeatedNumber(final List<Integer> a) {
        int out[]=new int[a.size()];
        for(int i=0;i<a.size();i++)
            out[i]=0;
        for(int i=0;i<a.size();i++){
            if(out[a.get(i)-1]==0)
                out[a.get(i)-1]=1;
            else
                return a.get(i);
        }
        return -1;
    }
}
