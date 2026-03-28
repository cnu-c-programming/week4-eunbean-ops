#include <stdio.h>

void swap_endian(int *x){

  unsigned char *addr= (unsigned char *)x;

  unsigned char tmp0= addr[0];
  unsigned char tmp1= addr[1];

   addr[0]= addr[3];
   addr[1]= addr[2];
   addr[2]= tmp1;
   addr[3]= tmp0;
}

int main(){
    int x= 0x12345678;

    printf("%x\n",x);//현재  빅 상태임
    swap_endian(&x);
    printf("%x\n",x);
  
    return 0;
}
