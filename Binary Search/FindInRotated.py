#Given a rotated array A and a number x , find whether the number x exists or not
# l1=[4,5,6,1,2,3]
l1=[7,8,1,2,3,4,5,6]
target=6
    
def Search(l1):
    start=0
    end=len(l1)-1
    if(l1[0]<l1[len(l1)-1]):
        return 0
    while(start<=end):
        mid=(start+end)//2
        if(l1[mid]<l1[mid-1]):
            return mid
        elif(l1[mid]>l1[0]):
            start=mid+1
        else:
            end=mid-1


def BS(l1,start,end,target):
    while(start<=end):
        mid=(start+end)//2    
        if(l1[mid]==target):
            return True
        elif(l1[mid]>target):
            end=mid-1
        else:
            start=mid+1
    return False


minIndex=Search(l1)
leftSearch=BS(l1,0,minIndex-1,target)
RightSearch=BS(l1,minIndex,len(l1)-1,target)
if(leftSearch!=False):
    print(leftSearch)
else:
    print(RightSearch)


