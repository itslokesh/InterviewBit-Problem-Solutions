public class PascalTriangle {
    public ArrayList<ArrayList<Integer>> generate(int A) {
        ArrayList<Integer> temp1=new ArrayList<>();
        ArrayList<ArrayList<Integer>> output=new ArrayList<ArrayList<Integer>>();
        if(A==0)
            return output;temp1.add(0,1);
        output.add(0,temp1);
        if(A==1)
            return output;
        temp1=new ArrayList<>();
        temp1.add(0,1);
        temp1.add(1,1);
        output.add(1,temp1);
        if(A==2)
            return output;
        else{
            int i=2;
            while(i<A){
                temp1=new ArrayList<>();
                temp1.clear();
                temp1.add(0,1);
                for(int j=1;j<i;j++)
                    temp1.add(j,output.get(i-1).get(j-1)+output.get(i-1).get(j));
                temp1.add(1);
                output.add(i,temp1);
                i++;
            }
            return output;
        }
    }
}
