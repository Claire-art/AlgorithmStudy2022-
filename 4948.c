#include <stdio.h>

int main(){
    int n , cnt = 0;
    int i,j,arr[246913] = {0,}; //n의 개수가 1-123456이므로

    arr[0] = 1;
    arr[1] = 1; 
    //0번째와 1번째는 절대 소수가 될 수 없으므로 1로 초기화한다.
    //1로 초기화하느 이유는 소수가 아닌 수를 1로 구분하고 소수인 수를 0으로 구별하기 위해서


    for(j = 2 ; j<246913/j ; j++){ //1은 절대소수가 될 수 없으므로 2부터 시작.
        if(arr[j] == 1) continue;

        for(i = j * j ; i < 246913; i += j){
            if (i % j ==0) arr[i] = 1;
        }


    }
    scanf("%d",&n);


    while(n != 0){
        cnt = 0;
        for(i = n+1 ; i <= n*2;i++){
            if (arr[i] == 0)
                cnt++;
            printf("%d\n",cnt);
            scanf("%d",&n);
        }

        return 0;
    }
}
