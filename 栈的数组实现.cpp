# include <stdio.h>
int main() {
    int Stack[5];
    int top = -1;
    int bottom = 0;
    Stack[++top] = 985;
    Stack[++top] = 211;
    Stack[++top] = 400;
    while(top>=bottom){
        printf("当前栈顶元素为%d\n",Stack[top]);
        top--;
    }
    return 0;
}



