#include <stdio.h>
int main(){
    printf("Enter the number");
    int num;
    scanf("%d",&num);
    for(int i=6;i<=num;i=i+6) printf("%d\n",i);
    return 0;
}
