#include <stdio.h>
#include <string.h>

int stack[10000];
int stackSize = 0; 

int push(int pushNum){
    stack[stackSize] = pushNum;
    stackSize ++;
}

int pop(){

    if(empty()){
        return -1;
    }

    stackSize -=1;
    return stack[stackSize];
}

int size(){
    //필요없음
}

int empty(){
    if(stackSize == 0){
        return 1;
    }

    return 0;
}

int top(){
    if(empty()){
        return -1;
    }

    return stack[stackSize-1];
}


int main(){
    int num,pushNum = 0;
    char command[5] = {0,};

    scanf("%d",&num);

    for(int i =0; i<num;i++){
        scanf("%s",command);

        if(!strcmp(command,"push")){
            scanf("%d",&pushNum);
            push(pushNum);
        }

        else if(!strcmp(command,"pop")){
            printf("%d\n",pop());
        }

        else if(!strcmp(command,"empty")){
            printf("%d\n",empty());
        }

        else if(!strcmp(command,"size")){
            printf("%d\n",stackSize);
        }

        else if(!strcmp(command,"top")){
            printf("%d\n",top());
        }

        
    }

    return 0;
}

