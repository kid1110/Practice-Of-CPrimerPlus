#include<stdio.h>
void first();
void flus();
void second();
void third();
void jolly();
void deny();
void fouth();
void fifth();
void sixth();
void seventh();
void smile();
void eighth();
int main(){
    first();
    second();
    third(21);
    fouth();
    fifth();
    sixth(10);
    seventh();
    eighth();
    return 0;
}
void flus(){
    printf("--------------\n");
}
void first(){
    flus();
    printf("kid\twu\n");
    printf("kid\nwu\n");
    printf("kid\t");
    printf("wu\n");
    flus();
}
void second(){
    flus();
    printf("kid wu address\n");
    flus();
}
void third(int age){
    flus();
    printf("age:%d\n", age*365);
    flus();
}
void jolly(){
    printf("For he's a jolly good fellow!\n");
}
void deny(){
    printf("Which nobody can deny\n");
}
void fouth(){
    flus();
    for(int i =0;i<3;i++){
        jolly();
    }
    deny();
    flus();
}

void br(){
    printf("Brazil, Russsia ");
}
void ic(){
    printf("India,China");
}
void fifth(){
    flus();
    br();
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();
    printf("\n");
    flus();
}

void sixth(int toes){
    flus();
    printf("toes: %d\n",toes);
    printf("double toes: %d\n",2*toes);
    printf("t: %d\n",toes*toes);
    flus();
}
void smile(){
    printf("smile!");
}
void seventh(){
    flus();
    for(int i = 3;i>0;i--){
        for(int j =0;j<i;j++){
            smile();
        }
        printf("\n");
    }
    flus();
}
void one_three(){
    printf("one\n");
    two();
    printf("three\n");
}
void two(){
    printf("two\n");
}

void eighth(){
    flus();
    printf("start now:\n");
    one_three();
    printf("done\n");
    flus();
}