s1="aabbcc"
s2="bcb"
k=0
ans=0
 for(i=0;i<s2.length;i++){
    ans=0
    for(j=k;j<s1.length;j++){
       if(s4[i]==s3[j]){
        ans=1
        k=j+1
        break
       }
    }
    if(ans==0){
        break
    }
 }

 console.log(ans)