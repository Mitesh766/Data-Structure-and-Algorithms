# find the largest element index  using BS
l1=[11,12,13,14,5]
start=0
end=len(l1)-1
while(start<=end):
    mid=(start+end)//2
    if(l1[mid]>l1[mid+1] and l1[mid]>l1[mid-1]  and mid>0 and mid<len(l1)-1):
        print(mid)
        break
    elif(l1[mid]<l1[mid-1] and mid>0):
        end=mid-1
    elif(l1[mid]<l1[mid+1] and mid<len(l1)-1):
        start=mid+1
