public class RemoveDuplicatesII {
    public int removeDuplicates(ArrayList<Integer> a) {
        int current=0;
        int count=0;
        if(a.size()<=2)
            return a.size();
        for(int i=1;i<a.size();){
            if(a.get(current).equals(a.get(i)) && count==0){
                a.set(current+1,a.get(i));
                current++;
                count++;
                i++;
            }
            else if(a.get(current).equals(a.get(i)) && count==1){
                i++;
            }
            else if(a.get(current).equals(a.get(i))){
                a.set(current+1,a.get(i));
                current++;
                count=0;
                i++;
            }
                System.out.println(i);
        }
        while(current<a.size()-1)
            a.remove(a.size()-1);
       return a.size();
    }
}
