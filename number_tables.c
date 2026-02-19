#include <stdio.h>
int main(){
    int num,n;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Enter the range:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d*%d=%d\n",num,i,(i*num));
    }
}
