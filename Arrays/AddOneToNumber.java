public class AddOneToNumber {
    public ArrayList<Integer> plusOne(ArrayList<Integer> A) {
        for(int i=0;i<A.size();){
            if(A.get(i)==0)
                A.remove(i);
            else
                break;
        }
        boolean flag=true;
        int i=A.size()-1;
        while(flag && i>=0){
            if(A.get(i)<9){
                A.set(i,A.get(i)+1);
                flag=false;
            }
            else{
                A.set(i,0);
            }
            i--;
        }
        if(flag)
            A.add(0,1);
        return A;
    }
}
