#include <stdio.h>

int main(){
    int P,N,M; //P : 테스트 케이스 개수 , N:테스트 케이스 번호,M:나머지값

    scanf("%d",&P);

    int cnt,a,b;

    for(int i = 0 ; i<P;i++){
        scanf("%d %d",&N,&M);

        cnt = 0;

        a=b=1;

        while(1){
            int tmp = (a+b) % M ;
            a=b;
            b=tmp;
            cnt++;

            if(a==1 && b ==1){
                break;        
            }
        }
        printf("%d %d\n",N,cnt);
    }
    return 0;
}
