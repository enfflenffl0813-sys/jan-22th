// 포인터 
#include <stdio.h>

void pfunc(int* p)
{
    printf("p가 가리키고 있는 것 : %p\n", p);
    *p += 100;
}

void exchange(int* p1, int* p2)
{
    int tmp = *p1;    // p1이 가리키는 곳의 값을 tmp에 대입 
    *p1 = *p2;
    *p2 = *p1;
    
}
int main()
{

    // 변수
    int n;      // 4 byte 메모리를 할당받고 초기화하지 않는다.
    int m[10];   // 4바이트로 10칸이니까 총 40바이트 
    // scanf("%d", &n);
    // 변수 앞에 단독으로 & 있을 때는 주소 연산자로 사용된다. 
    n = 5;
    //   %p : 주소를 매핑할 수 있는 형식 문자 
    printf("n의 주소 : %p\n", &n);
    
    int k = 10;


    // * : 아스테리크
    // *이 붙은 변수를 포인터 (변수)라고 한다.
    // 포인터(변수)는 무조건 주소(Address)만 저장할 수 있다. == 값을 넣을 수 없다. 값을 저장할 수는 없음.

    int* p; 
    // p = 10; 이런 코드로 값을 넣을 수 없음.]
    p = &n;     // 포인터 변수 p에 n의 주소를 대입    p자체가 이미 주소 가지고있음 
    printf("p의 값 : %p\n", p);                 // p에는 주소가 들어가 있음 

    p = &k;
    printf("p의 값 : %p\n", p);

    // *p == k
    printf("p가 가리키는 곳의 값: %d\n", *p);      //10
    // 5가 출력되도록
    p = &n;
    printf("p가 가리키는 곳의 값: %d\n", *p);    

    // *p == n
    *p = 20;                          // n의 값 : 20으로 바뀜 
    printf("n의 값 : %d\n", n);


    // p를 이용하여 k의 값을 100으로 변경하세요.
    p = &k;
    *p = 100;
    printf("k의 값 : %d\n", &k);

    //k의 값을 출력하세요.
        printf("k가 가리키는 곳의 값: %d\n", k);   // k = 100

    //pfunc 를 이용하여 n값을 출력
        pfunc(&n);
        printf("n의 값 : %d\n", &n);

    //pfunc를 이용하여 k값을 출력
        pfunc(&k);

        //         
        printf("k가 가리키는 곳의 값: %d\n", k);      // k 의 값 : 

        //  
        printf("n = %d, k = %d\n", n, k);      //  n과 k값 호출

        // n, k 를 이용하여 exchange 함수 호출하기
        exchange(&n, &k);
        printf("n = %d, k = %d\n", n, k);     //  n과 k값 호출


    return 0;
}


