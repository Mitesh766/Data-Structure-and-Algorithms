class Node:
    def __init__(self, data, previous=None, next=None):
        self.data = data
        self.next = next
        self.previous = previous

    # By defalt this will be called , while printing object name
    def __str__(self):
        return str(2 * self.data)


class DLL:
    def __init__(self):
        self.__head = None
        self.__tail = None
        self.__size = 0

    def size(self):
        return self.__size

    def isEmpty(self):
        return self.__size==0
    
    def append(self,data):
        newNode=Node(data)
        if self.isEmpty():
            self.__head=newNode
            self.__tail=newNode
        else:
            self.__tail.next=newNode
            newNode.previous=self.__tail
            self.__tail=newNode
        self.__size+=1
    
    def __str__(self):
        trav=self.__head
        l1=[]
        while trav is not None:
            l1.append(str(trav.data))
            trav=trav.next
        return "<----->".join(l1)
    
    def addFirst(self,data):
        newNode=Node(data)
        if self.isEmpty():
            self.__head=newNode
            self.__tail=newNode
        else:
            newNode.next=self.__head
            self.__head.prev=newNode
            self.__head=newNode
            
    def addAt(self,ind,data):
        if(ind <=0  or ind >self.size()):
            raise Exception("Index Error")            
        if ind == 0:
            self.addFirst(data)
        elif ind == self.__size:
            
            self.append(data)
            
        else:
            id=0
            trav=self.__head
            while(id!=ind-1):
                id+=1
                trav=trav.next
            newNode=Node(data,trav,trav.next)
            trav.next=newNode
            newNode.next.prev=newNode
        self.__size+=1
        
        
# delete first
#delete last
            
        
            
            
        

l1 = DLL()
l1.append(2)
l1.append(3)
l1.append(4)
l1.append(6)
l1.addFirst(8)
l1.addAt(2,5)
print(l1)
print(l1.size())