class Node {
    int data;
    Node next;

    Node(int data1, Node next1) {
        this.data = data1;
        this.next = next1;
    }

    Node(int data1) {
        this.data = data1;
        this.next = null;

    }

}

public class LinkedLJava {
    private static Node convertArrToLL(int arr[]) {

        Node head = new Node(arr[0]);
        Node mover = head;
        for (int i = 1; i < arr.length; i++) {
            Node temp = new Node(arr[i]);
            mover.next = temp;
            mover = temp;
        }
        return head;

    }

    private static void TraversingALL(Node head) {
        Node mover = head;
        while (mover != null) {
            System.out.print(mover.data + " ");
            mover = mover.next;
        }
    }

    private static int LengthOfLL(Node head) {
        Node mover = head;
        int count = 0;
        while (mover != null) {
            count++;
            mover = mover.next;
        }
        return count;
    }

    private static boolean isPresent(Node head, int target) {
        Node temp = head;
        while (temp != null) {
            if (temp.data == target) {
                return true;
            }
            temp = temp.next;
        }
        return false;
    }



    public static void main(String[] args) {
        int arr[] = { 1, 2, 3, 4, 7, 8 };
        Node head = convertArrToLL(arr);
        // System.out.println(head.data);
        // TraversingALL(head);
        // System.out.println(LengthOfLL(head));
       
        System.out.println(isPresent(head, 1));

    }

}
