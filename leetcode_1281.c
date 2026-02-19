int subtractProductAndSum(int n) {
    int sum=0,pro=1,num=n;
    while(num>0){
        sum=sum+(num%10);
        pro=(pro)*(num%10);
        num=num/10;
    }
    return pro-sum;
}
