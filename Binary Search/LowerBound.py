# // if duplicate values are present find the least index at which the element should be added
# if you find that same value which is supposed to be added keep searching towards left
# Find leftmost insertion point
l1=[4,5,6,6,7]
start=0;
end=len(l1)-1
ans=len(l1)
x=8
while(start<=end):
    mid=(start+end)//2
    if(l1[mid]>=x):
        ans=mid
        end=mid-1
    elif(l1[mid]<x):
        start=mid+1
 
print(ans)