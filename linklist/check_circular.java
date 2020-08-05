/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
public class Main
{
    static class Node {
        int data;
        Node next;
        Node(int tmp) {data = tmp;}
    }
 
    static boolean isCircularLinkedList(Node head) {
 
        if(head == null) {
            return Boolean.FALSE;
        }
        Node temp = head;
        do {
            temp = temp.next;
        } while(temp != null && temp != head);
 
        return (temp == head);
    }
	public static void main(String[] args) {
	    Node n1 = new Node(3);
        Node n2 = new Node(2);
        Node n3 = new Node(1);
        Node n4 = new Node(6);
        Node n5 = new Node(5);
        n1.next = n2;
        n2.next = n3;
        n3.next = n4;
        n4.next = n5;
        n5.next = n1;
 
        System.out.println("Is it circular linked list: "+isCircularLinkedList(n1));
    }
}
