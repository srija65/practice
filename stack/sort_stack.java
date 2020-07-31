import java.util.Stack;
public class Main
{
    public static void sort(Stack<Integer> st){
        if(st.isEmpty()){
            return;
        }
        int temp=st.pop();
        sort(st);
        insert(st,temp);
    }
    public static void insert(Stack<Integer> st,int temp){
        if(st.isEmpty()||st.peek()<temp){
            st.push(temp);
            return;
        }
        int ele=st.pop();
        insert(st,temp);
        st.push(ele);
    }
	public static void main(String[] args) {
	    Stack<Integer> st=new Stack<>();
	    st.push(9);
	    st.push(3);
	    st.push(4);
		System.out.println(st);
		sort(st);
		System.out.println(st);
	}
}

