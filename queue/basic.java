public class Q{
    int SIZE=5;
    int queue[]=new int[SIZE];
    int front,rear;
    Q(){
        front=-1;
        rear=-1;
    
    
    }
    boolean isfull() {
    if (front == 0 && rear == SIZE - 1) {
      return true;
    }
    return false;
  }

    boolean isEmpty(){
        if(front==-1){
            return true;
        }
        return false;
    }
    void en(int e){
        if(isfull()){
            System.out.println("Overflow");
        }else{
            if(front == -1){
                front=0;
            }
            rear++;
            queue[rear]=e;
            System.out.println(e);
        }
    }
    int dequeue() {
        int element;
        if (isEmpty()) {
            System.out.println("Queue is empty");
            return (-1);
        } else {
        element = queue[front];
        if (front >= rear) {
            front = -1;
            rear = -1;
        } 
        else {
            front++;
        }
        System.out.println("Deleted :" + element);
        return (element);
        }
    }

  void display() {
      int i;
    if (isEmpty()) {
      System.out.println("Empty Queue");
    } else {
      System.out.println( front);
      
      for (i = front; i <= rear; i++)
        System.out.print(queue[i] + "  ");

      System.out.println(rear);
    }
  }
  public static void main(String[] args) {
    Q q = new Q();
    q.en(1);
    q.en(2);
    q.en(3);
    q.en(4);
    q.en(5);
    q.en(6);

    q.display();
    q.dequeue();
    q.display();

  }
    
}
