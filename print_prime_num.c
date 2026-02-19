#include <stdio.h>
int main(){
    
    for(int i=2;i<=300;i++){
        int count=0;
        for(int j=2;j<=i;j++){
            if(i%j==0) count++;
            if(count==2) break;
        }
        if(count==1) printf("%d\n",i);
    }
}
