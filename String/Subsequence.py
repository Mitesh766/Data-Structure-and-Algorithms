# check if s2 is present in s1 or not , order should be same (left to right only ) , not necessarily contiguous or consecutive
s1="aabbcc"
l1=list(s1)
s2="ccb"
l2=list(s2)
print(l1)
k=0
for i in range(len(l2)):
    ans=0
    for j in range(k,len(l1)):
        if(l2[i]==l1[j]):
            ans=1
            k=j+1
            break
    if(ans==0):
        break
print(ans)
