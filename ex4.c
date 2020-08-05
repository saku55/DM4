#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,num,heads=0,tails=0;

    for(i=0; i<3; i++){
        num=rand();
        if(num%2==0){
            printf("Round %d: Head\n", i+1);
            heads++;
        } else{
            printf("Round %d: Tail\n", i+1);
            tails++;
        }
    }
    printf("Heads: %d, Tails: %d\n", heads, tails);

    //win lost 表示パート
    if(heads>tails) printf("You win");
    else printf("You lost");
    return 0;
}
