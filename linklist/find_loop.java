public class Main{
    Node head;
    static class Node {
		int value;
		Node next;
 
		Node(int value) {
			this.value = value;
 
		}
	}
 
	public void add(Node node) {
 
		if (head == null) {
			head = node;
		} else {
			Node temp = head;
			while (temp.next != null)
				temp = temp.next;
 
			temp.next = node;
		}
	}
 
	public void print() {
		Node temp = head;
		while (temp != null) {
			System.out.format("%d ", temp.value);
			temp = temp.next;
		}
		System.out.println();
	}
 
	public boolean Loop() {
		Node fastPtr = head;
		Node slowPtr = head;
		while (fastPtr != null && fastPtr.next != null) {
			fastPtr = fastPtr.next.next;
			slowPtr = slowPtr.next;
			if (slowPtr == fastPtr)
				return true;
 
		}
		return false;
	}
	public static void main(String[] args) {
		Main list = new Main();
		
		Node loopNode=new Node(7);
		list.add(new Node(5));
		list.add(new Node(6));
		list.add(loopNode);
		list.add(new Node(1));
		list.add(new Node(2));
 
		list.print();
		list.add(loopNode);
		System.out.println("Loop existed" + list.Loop());
 
	}
}
 
 

