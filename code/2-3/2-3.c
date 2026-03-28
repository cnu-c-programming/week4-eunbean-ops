#include <stdio.h>
#include <string.h>

int main(){
    char a[64]="Hello";
    char b[64]="world";
    char c[128];
 // 길이
    size_t len= strlen(a);
    printf("length of a: %d\n", len);
// 문자열 복사
    strcpy(c,a);
    printf("a: %s, c: %s\n", a,c);

//문자열 합
    strcat(c," ");
    strcat(c,b);
   printf("c: %s\n", c);

//비교
    printf("strcmp(%s, %s) = %d\n", a,a, strcmp(a,a) );
    printf("strcmp(%s, %s) = %d\n", a,b,strcmp(a,b) );

    return 0;
}
