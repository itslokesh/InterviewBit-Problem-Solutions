public class firstMissingPositiveInteger {
    public int firstMissingPositive(ArrayList<Integer> A) {
        ArrayList<Integer> output=new ArrayList<>();
        for(int i=0;i<A.size()+1;i++)
            output.add(0);
        for(int i=0;i<A.size();i++)
            if(A.get(i)>0 && A.get(i)<=A.size())
                output.set(A.get(i),1);
        int i;
        for(i=1;i<=A.size();i++)
            if(output.get(i)==0)
                return (i);
        return(i);
    }
}
