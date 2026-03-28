#include <stdio.h>

void inc(int* x){
   if(x!=NULL){
    *x= *x+1;
    printf("%d\n", *x);
   }
}
int main(){
    int x= 3;

    inc(&x); //4됨
    inc(NULL);
    return 0;

}
