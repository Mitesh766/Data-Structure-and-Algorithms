#include<iostream>
#include<vector>

using namespace std;

class Node{

   public:
   int data;
   Node* next;


//constructor
// if two parameteres are passed this will be considered
   public:
   Node(int data1,Node* next1){
    data=data1;
    next=next1;
   }

// if only one paramter is passed this will be considered
   public:
   Node(int data1){
    data=data1;
    next=nullptr;
   }


};

// Function of dtype Node*
Node* convertingArrToLL(vector<int> arr)
  { Node* head =new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;

}

void traversingALL(Node* head){
    Node* mover=head;
    while(mover){
        cout << mover->data << " ";
        mover=mover->next;
    }
}

int LengthOfLL(Node* head){
    Node* mover=head;
    int cnt=0;
    while(mover){
        cnt++;
        mover=mover->next;
    }
    return cnt;
}


bool SearchInALL(Node* head,int target){
    Node* temp=head;
    while(temp!=nullptr){
        if(temp->data ==target){
            return 1;
        }
        temp=temp->next;
    }

    return 0;
}

int main(){
    vector<int> arr={9,2,3,4,5,6};
    // Node* head= new Node(arr[0],nullptr);
    Node* head=convertingArrToLL(arr);
    // traversingALL(head);
    // cout << LengthOfLL(head);
    cout << SearchInALL(head,2);
    return 0;
}
