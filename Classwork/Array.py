class myArray:
    def __init__(self,size:int)->int:
        self.__size=size  
        self.__data=[None]*size
        
    def __getitem__(self,index):
        if(index>=0 and index <self.__size ):
            return self.__data[index]
        else:
            raise  IndexError("Index out of bound")
    
    def __setitem__(self,index,value):
        if(index>=0 and index < self.__size ):
            self.__data[index]=value;
    def __len__(self):
        return self.__size;
    
    def __resize(self):
        new_array=[None] * (2*self.__size)
        for i in range(self.__size):
            new_array[i]=self.__data[i]
        self.__size=2*self.__size
        
    def append(self,value):
        if(self.size < self.size):
            self.__data[self.__size]=value
            self.__size+=1
        else:
            self.__resize()
            self.__data[self.__size]=value
            self.__size+=1
            
                    
a=myArray(5)
a[4]=2
print(a[3])
            
        
