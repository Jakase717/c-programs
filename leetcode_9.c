bool isPalindrome(int x) {
    int n=x;
    if(n<0){                //for negative numbers
        long long int c=0;
         while(n<0){
          c=(c*10)+(n%10);
          n=n/10;
         }
         c=(-1)*c;
         if(c==x) return true;
         else return false;
    }
     else {                //for positive numbers 
        long long int c=0;
         while(n>0){
          c=(c*10)+(n%10);
          n=n/10;
         }
         if(c==x) return true;
         else return false;
     }
}
