#define _CRT_SECURE_NO_WARNINGS
//위에 내용을 정의하면 _ s 시리즈 함수를 사용해도 에러가 발생하지 않는다.

#include <stdio.h>

int main()
{
	// clang, gcc, g++
	// 기본 입력문 
	short n;
	char ch; 


	printf("정수를 입력하세요 : ");
	scanf("%hd", &n);
    printf("%s\n", n % 2 ? "홀수": "짝수"); 

	scanf("%c", &ch);   //입력 버퍼 낭비시키기   ---- 중요함!! 그래야 정수 , 문자 따로따로 입력 받을 수 있음.

	printf("문자를 입력하세요 : ");
	// scanf("% hhd", &ch);  // &엠퍼센드, | 파이프라인 
	// scanf("%hd", &n);   // 표준 입력 장치로부터 입력을 받아 변수 n에 저장
	// %d로만 쓰면 4바이트짜리를 2바이트에 넣으려고했던거라 안됨..--> hd로 바꿔줘야함
	scanf("%c", &ch);
	printf("입력된 문자 : %c\n", ch);
	printf("ch에 저장된 값 : %hhd\n", ch);
	


	//error의 종류 : 컴파일에러(문법 에러) , 런타임 에러(%d 때문), 논리적인 에러

	return 0;
}