# Find the frequency of a number x in array A
l1=[1,2,3,3,4,4,4,5,6]
start=0
end=len(l1)-1
ans1=len(l1)
target=-5
while(start<=end):
    mid=(start+end)//2
    if(l1[mid]<target):
        start=mid+1
    elif(l1[mid]>=target):
        ans1=mid
        end=mid-1

start=0
end=len(l1)-1
ans2=0
target=-5
while(start<=end):
    mid=(start+end)//2
    if(l1[mid]>target):
        end=mid-1
    elif(l1[mid]<=target):
        ans2=mid+1
        start=mid+1

print(ans2-ans1)