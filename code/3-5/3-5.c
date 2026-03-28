#include <stdio.h>

void my_print(char type, void*x){
if(type== 'C'){
    unsigned char *t =(unsigned char *)x;
    printf("%c\n", *t); 
}else if( type=='D'){
    unsigned int *t1= (unsigned int *)x;
    printf("%d\n", *t1);
}else if( type== 'S'){
    char *t2= (char *)x;
    printf("%s\n", t2);
}

}
int main(){
    int a= 0x61;
    char b='b';
    char* c= "hello world";

    my_print('C', &a);
    my_print('D', &b);
    my_print('S',c);
    my_print('C',c);
}
