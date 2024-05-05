class Array:
    def __init__(self,capacity):
        self.__size=0;
        self.__capacity=capacity
        self.__data=[None]*capacity
        
    def __setitem__ (self,index,value):
        if(index >=0 and index<self.__capacity):
            self.__data[index]=value
            self.__size+=1
            
        else :
            raise IndexError("Index Out of bound");
            
    def __getitem__ (self,index):
        if(index >=0 and index<self.__capacity):
            return self.__data[index]
        else :
            raise IndexError("Index Out of bound")
    
    def __len__(self):
        return self.__size
    
    def __resize(self):
        self.__capacity=self.__capacity*2
        new_array=[None]*self.__capacity
        for i in self.__data:
            new_array[i]=self.__data[i]
        self.__data=new_array
    
    def append(self ,value):
        if(self.__size>self.__capacity):
            self.__resize()
            self.__data[self.__size]=value
            self.__size+=1
        else:
            self.__data[self.__size]=value
            self.__size+=1
            
        
        


a1=Array(20)
a1[2]=10
a1[1]=20
a1.append(12)
print(a1[2])            
        