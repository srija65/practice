public class Main{
    class Node{
        int data;
        Node next;
        
        public Node(int data){
            this.data=data;
            this.next=null;
        }
    }
    public Node head=null;
   // public Node tail=null;
    public void add(int data){
        Node newNode=new Node(data);
        if(head==null){
            head=newNode;
            //tail=newNode;
        }
        else{
            newNode.next=head;
            head=newNode;
        }
    }
    public void insertAfter(Node prev_node, int new_data) 
    { 
        
        if (prev_node == null) 
        { 
            System.out.println("No previous node"); 
            return; 
        } 
  
        Node new_node = new Node(new_data); 
        new_node.next = prev_node.next; 
        prev_node.next = new_node; 
    } 
   
    public void inatend(int new_data) 
    { 
    Node new_node = new Node(new_data); 
    if (head == null) 
    { 
        head = new Node(new_data); 
        return; 
    } 
    new_node.next = null; 
    Node last = head;  
    while (last.next != null) 
        last = last.next; 
    last.next = new_node; 
    return; 
} 
   
    void del(int key){
        Node temp=head,prev=null;
        if(temp!=null && temp.data!=key){
            prev=temp;
            temp=temp.next;
        }
        if(temp==null){
            return;
        }
        prev.next=temp.next;
    }
     
    public void display(){
        Node  current=head;
        if(head==null){
            System.out.println("List is Empty");
            return;
        }
        while(current!=null){
            System.out.println(current.data+" ");
            current=current.next;
        }
        System.out.println();
    }
    public static void main(String args[]){
        Main ll=new Main();
        ll.add(1);
        ll.display();
        ll.add(2);
        ll.display();
        ll.insertAfter(ll.head,5);
        ll.display();
        ll.inatend(6);
        ll.display();
        ll.del(5);
        ll.display();
        
    }
}
