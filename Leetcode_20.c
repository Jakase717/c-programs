void push(char *stack,int *ptr,int size,char v);
void pop(char *stack,int *ptr);
bool isValid(char* para) {
    int size=strlen(para),ptr=-1;
char stack[size+1];
for(int i=0;i<size;i++){
    if(para[i]=='(' || para[i]=='[' || para[i]=='{') push(stack,&ptr,size,para[i]);
    else {
        if((ptr>-1) && ((para[i]==')' && stack[ptr]=='(') || (para[i]==']' && stack[ptr]=='[') || (para[i]=='}' && stack[ptr]=='{'))) pop(stack,&ptr);
        else{
          printf("0");
          return false;
        } 
    }
}
if(ptr==-1) return true;
else return false;
}
void push(char *stack,int *ptr,int size,char v){
    if((*ptr)>=(size-1)) return;
    (*ptr)++;
    stack[*ptr]=v;
}
void pop(char *stack,int *ptr){
    if(*ptr>=0) (*ptr)--;
}
