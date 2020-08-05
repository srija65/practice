
public class Main
{
    class Node{
        int item;
        Node prev;
        Node next;
        Node(int item){
            this.item=item;
        }
    }
    Node head,tail=null;
    public void add(int item){
        Node newnode=new Node(item);
        if(head==null){
            head=tail=newnode;
            head.prev=null;
            tail.next=null;
        }
        else{
            tail.next=newnode;
            newnode.prev=tail;
            tail=newnode;
            tail.next=null;
        }
    }
    public void print(){
        Node curr=head;
        if(head==null){
           System.out.println("Empty list");
           return;
        }
        System.out.println("Nodes are:");
        while(curr!=null){
            System.out.print(curr.item+" ");
            curr=curr.next;
        }
    }
	public static void main(String[] args) {
		//System.out.println("Hello World");
		Main dl_List = new Main();  
       
        dl_List.add(10);  
        dl_List.add(20);  
        dl_List.add(30);  
        dl_List.add(40);  
        dl_List.add(50);  
        dl_List.print();
	}
}
