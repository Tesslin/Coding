import java.io.*;
import java.util.*;

/*
 * To execute Java, please define "static void main" on a class
 * named Solution.
 *
 * If you need more classes, simply define them inline.
 */

class Solution {
  static Node head = null;
  class Node{
    int data;
    Node next;
    Node(int item){
      data=item;
      next=null;
    }
  }
  Node reverseLinkedList(Node node){
    Node prev=null;
    Node next=null;
    Node curr=node;
    while(curr !=null){
      next=curr.next;
      curr.next=prev;
      prev=curr;
      curr=next;
    }
    node=prev;
    return node;
  }
  
  void addItem(int item){
    Node newNode=new Node(item);
    if(head == null){
      head =new Node(item);
      return;
    }
    Node curr=head;
    newNode.next=null;
    while(curr.next!=null)
      curr=curr.next;
    curr.next=newNode;
    return ;
  }
  void printList(Node node){
    Node curr=node;
    while(curr!=null){
      System.out.print(curr.data + " ");
      curr=curr.next;
    }
  }
  public static void main(String[] args) {
    
    Solution linkedList=new Solution();
    linkedList.addItem(18);
    linkedList.addItem(5);
    linkedList.addItem(4);
    // linkedList.head.next.next.next=new Node(11);
    linkedList.printList(head);
    System.out.println("\nNow Reverse is below");
    head=linkedList.reverseLinkedList(head);
    linkedList.printList(head);
    
  }
}
