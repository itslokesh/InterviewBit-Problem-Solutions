public class KthRowPascal {
    public ArrayList<Integer> getRow(int A) {
        ArrayList<Integer> out=new ArrayList<Integer>();
        out.add(0,new Integer(1));
        if(A==0)
            return out;
        out.add(1,new Integer(1));
        if(A==1)
            return out;
        for(int i=2;i<=A;i++){
            Integer temp1=new Integer(out.get(0));
            Integer temp2=new Integer(out.get(1));
            for(int j=1;j<=out.size()-1;j++){
                temp2=out.get(j);
                out.set(j,temp1+temp2);
                temp1=temp2;
            }
            out.add(i,new Integer(1));
        }
        return out;
    }
}
