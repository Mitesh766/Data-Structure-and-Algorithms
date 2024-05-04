# find minimum element in the rotated array
# the smallest element of left side array will be greater than the largest of the right side array because sorted array is rotated 
def findMin(l1):
    if(l1[0]<l1[len(l1)-1]): #if the last  element is greater than the first element , implies it is not rotated 
        return 0  # 0th index will be smallest as array is not rotated
    start=1
    end=len(l1)-1
    while(start<=end):
        mid=(start+end)//2

        if(l1[mid-1]>l1[mid] and start>0):
            return mid
        elif(l1[mid]>l1[0]):
            start=mid+1
        else:
            end=mid-1
            




l1=[5,6,6,7,2,3,4]
print(findMin(l1))