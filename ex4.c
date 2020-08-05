#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,num,heads=0,tails=0;

    //名前を聞くパート
    char str[8];
    printf("Who are you? ");
    scanf("%s", str);
    printf("Hello, %s\n", str);

    //コイントスのパート
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
    if(heads>tails) printf("%s win", str);
    else printf("%s lost", str);
    return 0;
}
