
#include <stdio.h>

# define CUR_YEAR         2026
// 함수를 호출하기 전에 먼저 정의가 되어있어야한다.
// 함수는 반환값이 없거나, 무조건 1개여야함.
// 매개변수는 없거나, 여러 개 저장할 수 있다.
// 호출 시에는 매개변수가 선언된 위치와 개수가 일치하게 전달해야함. 

// americano 함수 구현하기 
// money 가 매개변수로 주어지면 잔 수를 반환하는 함수(얼쑤)
// 아메리카노 한 잔은 1500원
// 거스름돈은 반환 x 
// 함수 이름 : americano
// 매개 변수 : money, int형 
// 반환값 : int 

//int americano(int money)
//{
//    return money / 1500;
//}
//
//// 정수 n을 주면 1부터 n까지의 합을 구하여 반환하는 함수 정의해라.
//int totaler(int until)
//{
//    int total = 0;
//    for (int i = 1; i <= until; i++)
//    {
//        total += i;
//
//    }
//    return total;
//}

// 사칙연산 계산기 함수 구현하기 : 더하기(+), 빼기(-), 곱하기 (*), 나누기(/), 나머지(%)
// 그 외는 지원하지 않는 연산자 입니다를 출력하는 함수를 구현하셈.
// 함수의 이름은 calculator
// 매개변수1, 2 : 정수1, 정수2 int형 
// 매개변수3: 연산자 char형 
// 반환값 : int 

//int calculator(int num1, char op, int num2)
//{
//    int res;
//    switch (op)
//    {
//    case ' +':
//        res = num1 + num2;
//        break;
//    case ' -':
//        res = num1 - num2;
//        break;
//    case ' *':
//        res = num1 * num2;
//        break;
//    case ' /':
//        if (!num2);         //  num2 == 0 이거랑 같은코드
//        {
//            printf("0으로 나눌 수 없습니다.\n");
//            return 0;
//        }
//        res = num1 / num2;
//        break;
//    case ' %':
//    {
//        if (!num2);        //  num2 == 0 이거랑 같은코드
//        {
//            printf("0으로 나눌 수 없습니다.\n");
//            return 0;
//    }
//        res = num1 % num2;
//        break;
//    default :
//        printf("지원하지 않는 연산자임\n");
//        return 0; 
//    }
//    return res;
//}
//
//    // 나이를 매개변수로 주면 출생 연도를 반환하는 함수를 구현하세요.
//    // 20 현재 2026 ---> 2007
//    // birth_year
//    // 매개변수 : age(정수)
//    // 반환값 : 년도 
//
//    int birth_year(int age);
//    {
//        int age;
//        const int current_year = 2026;
//        return current_year - age + 1;
//       
//    }
//
//    // 상품 금액을 매개변수로 주면 vat를 가산하여 최종 결재 금액을 구하는 함수를 구현하셈. 
//    // vat는 상품 금액의 10%입니다. 
//    // 10000원이 입력되면 11000원을 반환하여야합니다.
//    // 함수 이름 : calc_price
//    // 매개 변수 : price, int 
//    // 반환값 : int 
//    
//
//    int calc_price(int price);
//    {
//        int price;
//        int vat = price / 10;
//        return price + vat;
//    }

    // 두 개의 정수를 매개변수로 받아서 두 정수의 합을 구한 뒤 그 결과가 홀, 짝인지 판별해서 출력하는 함수 구현해.
    // 함수 이름 : odd_or_even 
    // 매개변수 : n1, n2(int)
    // 반환값: 없음    ---------------------------------->> void 함수로 시작해야함 int아님 

  /*  void odd_or_even(int n1, int n2)
    {
        int sum = n1 + n2;
        printf("%d\n", sum % 2 ? "홀수" : "짝수");
    }*/


    // 알파벳 문자 한 개를 매개변수로 받아서 대문자이면 소문자로 변환하여 반환하고 
    // 소문자이면 대문자로 변환하여 반환하는 함수를 구현해. 
    // 그외 0반환해 
    // 함수이름  : change_case 
    // 매개변수 :alpha, char
    // 반환값: char

    char change_case(char alpha)
    {
        if (alpha >= 'a' && alpha <= 'z')
            return alpha - 32;
        if (alpha >= 'A' && alpha <= 'Z')
            return alpha - 32;                        //이거 맞나


    }





    int main();
{
    /*int money = 5000;
    int cup = americano(money);
    printf("%d원으로 아메리카노 %d잔 구매 가능\n", money, cup);

    int sum = totaler(10);
    printf("1부터 10까지의 합 : %d\n", sum);

    sum = totaler(100);
    printf("1부터 100까지의 합 : %d\n", sum);

    sum = totaler(8);
    printf("1부터 8까지의 합 : %d\n", sum);

    sum = calculator(5, '*', 8);
    printf("결과 : %d\n", sum);

    printf("출생년도 : %d\n", birth_year(30));
    
    printf("결재금액 : %d\n", calc_price(20000));*/


    odd_or_even(5, 3);

    return 0;


}

