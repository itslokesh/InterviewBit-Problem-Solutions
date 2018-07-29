public class RemoveElement {
    public int removeElement(ArrayList<Integer> a, int b) {
        int current=0;
        for(int i=0;i<a.size();i++)
            if(a.get(i)!=b){
                a.set(current,a.get(i));
                current++;
            }
        while(current<a.size())
            a.remove(current);
       return a.size();
    }
}
