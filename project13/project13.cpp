
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>               //standard input/output, 표준 입출력에 관련
#include <string.h>              // 문자열 처리에 관련된 함수들이 정의

int main()
{

    // 0 == '\0'
    // '\0' : null terminated character

    // 배열로 문자열 만들기 
    // 문자열은 배열이다.
    //char sz[] = { 65, 66, 67, 68, 69, 70, 0};          // 배열임
     // char sz[] = { 'A', 'B', 'C', 'D', 'E', 'F', '\0' };     // ''안에는 문자 1개만 들어갈수있음
     //char sz[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
    char sz[] = "Hello";    // 문자열(String) 
    int len = sizeof(sz);          //배열의 길이 구하기
   /* for (int i = 0; i < len; i++)
    {
        printf("%c", sz[i]);
    }*/
    printf("sz배열의 크기 : %d\n", len);
    printf("%s\n", sz);

    //sz[1] = 'E'; //1번 인덱스의 값을 'E'로 대입
    //printf("%s\n", sz);

    // 배열의 크기는 문자열의 길이와 같은가?
    // 문자열의 길이 구하기 strlen
    int slen = strlen(sz);
    printf("sz문자열의 길이 : %d\n", slen);

    char sz2[] = "Hello";    // 문자열(String)
    // 문자열 비교하기 strcmp
   //  if (sz == sz2)
   if( strcmp(sz, sz2)==0)
        printf("%s와 %s는 서로 같음\n", sz, sz2);
    else
        printf("%s와 %s는 서로 다름\n", sz, sz2);

   // & : 주소연산자 
   // 문자열 입력
   char name[10];        //알파벳 9글자까지 ㄱㄴ
   printf("이름을 입력하셈 : ");
   scanf("%s", name);      //문자열을 입력받을 때는 주소 연산자를 붙이지 않음         //공백전까지만 입력받이버림 즉, scanf는 공백 문자를 포함한 문자열을 입력받을 수 없다.
   printf("%s\n", name);

   // fgets(받을 배열, 최대 길이, stdin):
   // 표준입력장치로부터 문자열을 입력받아 name에 대입한다. 
   /*fgets(name, 20, stdin);
   printf("%s\n", name);*/

    return 0;
}
