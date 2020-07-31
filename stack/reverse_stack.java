import java.util.Stack;
public class Main
{
	
    
        public static void rev(Stack<Integer> st){
            if(st.isEmpty()){
                return;
            }
            int temp=st.pop();
            rev(st);
            insert(st,temp);
            
        }
    
    public static void insert(Stack<Integer> st,int ele){
        if(st.isEmpty()){
            st.push(ele);
            return;
        }
        int top=st.pop();
        insert(st,ele);
        st.push(top);
    }
     
    public static void main(String[] args)  
    { 
        Stack<Integer> st=new Stack<>();
        st.push(1); 
        st.push(2); 
        st.push(3); 
        st.push(4); 
        System.out.println("Original Stack"); 
        System.out.println(st); 
        rev(st); 
        System.out.println("Reversed Stack"); 
        System.out.println(st); 
    } 
} 
	
