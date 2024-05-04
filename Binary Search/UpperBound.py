# find rightmost insertion point

l1=[1,2,3,4,4,5,5,5,6,6]
target=4
start=0
end=len(l1)-1
ans=-1
while(start<=end):
    mid=(start+end)//2
    if(l1[mid]>target):
        end=mid-1
    elif(l1[mid]<=target):
        start=mid+1
        ans=mid
print(ans+1)
    