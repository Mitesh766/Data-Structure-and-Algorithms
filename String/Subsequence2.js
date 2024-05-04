s1="aabbcc"
s2="a"
s1=s1.split(",")
arr=[2,0,5,1,3,4]

i=0
j=0
count=0
for(m=0;m<arr.length;m++){
    s1[arr[m]]=" "
    console.log(s1[m])
    while(i<s1.length && j<s2.length){
        if(s1[i]==s2[j]){
            i++ 
            j++
        }
        else{
            i++
        }
    }
    if(j==s2.length){
        count++
    }
    else{
        break
    }

}
console.log(count)
