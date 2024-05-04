import java.util.Scanner;

class Subsequence {

    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        String s1="aabbcc";
        String s2="ac";
        int k=0;
        int ans=0;
        for (int i = 0; i < s2.length(); i++) {
             ans=0;
            for (int j = k; j < s1.length(); j++) {
                if(s2.charAt(i)==s1.charAt(j)){
                    ans=1;
                    k=j+1;
                    break;
                }
            }
            if(ans==0){
                break;
            }
        }

System.out.println(ans);
    }
}