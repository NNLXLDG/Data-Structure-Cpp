#include<stdio.h>
#define MaxSize 50
typedef int ElemType;

typedef struct{
    ElemType date [MaxSize];
    int top;
}SqStack;


void InitStack(SqStack &S){
    S.top = -1;
}

bool Push(SqStack &S,ElemType e){
    if(S.top == MaxSize-1){
        return false;
    }
    S.date[++S.top] = e;
    return true;
}

bool Pop(SqStack &S,ElemType &e){
    if(S.top == -1){
        return false;
    }
    e = S.date[S.top--];
    return true;
}

int main(){
    ElemType e = 1;
    SqStack S;
    InitStack(S);
    Push(S,985);
    Push(S,211);
    Push(S,400);


    return 0;
}
