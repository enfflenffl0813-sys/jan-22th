


	// 사칙 연산을 수행하는 계산기 프로그램을 작성하세요.
	// 두 개의 정수와 연산자를 입력받아서 해당 연산자에 대한 연산을 수행하고 
	// 결과를 도툴하는 프로그램을 작성하시오.
	// x를 누르면 프로그램을 종료하도록 하세요.

	// 출력형식)
	/*
	첫 번째 정수를 입력하세요  : 5
	다음 연산자  중 하나를 입력하세요 (+, -, *, /, x) : *
	두 번째 정수를 입력하세요 : 4

	5 * 4 = 20

	x를 눌렀을 경우 프로그래밍이 종료되었습니다. 뜨도록 하기 
	*/

#define _CRT_SECURE_NO_WARRNINGS
#include <stdio.h>

int main()
{
	int n1, n2; // 두 개의 정수를 입력받을 변수를 선언한다.
	char op;   // 연산자를 받을 문자형(char)변수를 선언한다.
	char tmp;  // 입력 버퍼 클리어용 변수 
	
	do
	{
		printf("첫번째 정수를 입력하세요 : ");
		scanf_s("%d", &n1); // 첫 번째 정수를 입력받음

		printf("다음 연산자 중 하나를 입력하세요. x를 입력시 종료(+, -, *, /, x) : ");
		scanf_s("%c", &op); 
		scanf_s("%c", &tmp);   // 입력버퍼 클리어 

		printf("두 번째 정수를 입력하세요 : ");
		scanf_s("%d", &n2); //두 번째 정수를 입력받음

		switch (op)
		{

		case '+':
			printf("%d + %d = %d\n", n1, n2, n1 + n2);
			break;
		case '-':
			printf("%d - %d = %d\n", n1, n2, n1 - n2);
			break;
		case '*':
			printf("%d * %d = %d\n", n1, n2, n1 * n2);
			break;
		case '/':
			printf("%d / %d = %d\n", n1, n2, n1 / n2);
			break;                                 // 현재 반복문을 즉시 탈출시킴
		case 'x':
			break;
		default:
			printf("연산자를 잘못 입력했습니다.다시해");
		}

		printf("\n\n");

	} while (op != 'x');		// 연산자에 'x'가 입력되지 않으면 계속 실행 , 반대로 연산자에 'x'가 입력되면 종료

	printf("프로그래밍이 종료되었습니다.");

	return 0;
}


