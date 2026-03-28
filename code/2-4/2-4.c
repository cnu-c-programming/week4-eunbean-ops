#include <stdio.h>
#include <ctype.h>

int main(){
    char chars[] ={'A','z','5','!',' '};
    int n= sizeof(chars)/sizeof(chars[0]);
    //sizeof(chars)= 메모리에서 몇 바이트 차지하느냐 char은 1바이트니까
    //1*5
    //sizeof(chars[0])= 첫번째 요소가 차지하는 바이트 수==1


  
    for(int i=0; i<n; i++){
        char ch= chars[i];
        printf("%c -alpha:%d digit:%d upper:%c lower:%c\n", 
        ch,
        isalpha(ch),
         isdigit(ch), 
         toupper(ch),
         tolower(ch) );

    }

}
