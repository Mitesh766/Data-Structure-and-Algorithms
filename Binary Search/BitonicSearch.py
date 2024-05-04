# # Given a bitonic array and a number x(target) , find whether that number exists or not
l1=[1,2,3,4,5,0,-1]
target=1
start=0
end=len(l1)-1
ans=-1
while(start<=end):
    mid=(start+end)//2
    if(l1[mid]>l1[mid+1] and l1[mid]>l1[mid-1]):
        ans=mid
        break
    elif(l1[mid]>l1[mid-1]):
        start=mid+1
    elif(l1[mid]<l1[mid-1]):
        end=mid-1
    



def LeftBS(l1,ans,target):
    start=0
    end=ans
    while(start<=end):
        mid=(start+end)//2
        if(l1[mid]>target):
            end=mid-1
        elif(l1[mid]<target):
            start=mid+1
        else:
            return 1
    return 0
         


def RightBS(l1,ans,target):
    start=ans+1
    end=len(l1)-1
    while(start<=end):
        mid=(start+end)//2
        if(l1[mid]<target):
            end=mid-1
        elif(l1[mid]>target):
            start=mid+1
        else:
            return 1
    return 0
        


finalAnswer=RightBS(l1,ans,target)
if(finalAnswer==0):
    finalAnswer=LeftBS(l1,ans,target)
    

print(finalAnswer)