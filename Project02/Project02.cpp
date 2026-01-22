#include <stdio.h>

// Data Type
// 정수 : 음수, 0, 양수
// char(1byte), short(2byte), int(4byte), long(win : 4, mac:8), longlong(8byte)

//실수 : 소숫점을 포함하는 숫자 
//float(4), double(8byte), long double(win, mac)

int main()
{ 
	//  정수형 
	char n; // 2^8개의 서로 다른 데이터를 표현(저장)할 수 있다.
	short num; // 2^16개의 서로 다른 데이터를 표현(저장)할 수 있다. 
	int score; // 2^32개의 서로 다른 데이터를 표현(저장)할 수 있다.
	long money; //2^32개의 서로 다른 데이터를 표현할 수 있다.
	long long big_number; // 2^64개의 서로 다른 데이터를 표현할 수 있다.

 // sizeof 연산자(operator): 타입 또는 변수의 크기를 바이트 단위로 알려준다.
	printf("n의 크기: %d\n", sizeof(n));
	printf("num의 크기: %d\n", sizeof(short));
	printf("score의 크기: %d\n", sizeof(int));
	printf("money의 크기: %d\n", sizeof(long));
	printf("big_number의 크기: %d\n", sizeof(long long));

	printf("double의 크기 : %d\n", sizeof(long long));

	n = 127;
	printf("n의 값: %d\n", n);

	n = 128;  //char 형식으로는 128을 저장할 수 없다. -128 출력됨(다시 처음으로 돌아감)
	printf("n의 값: %d\n", n);

	n = 100;

	printf("n의 값: %x\n", n);
	printf("n의 값: %o\n", n);
	printf("n을 문자로 표현: %c\n", n);

	double d = 100.0;
	printf("n의 값: %f\n", d);
	printf("n의 값: %e\n", d);

	// 형식 문자 (Formatted String)
	// %d : 값을 정수형으로 표현
	// %u : 값을 양의 정수형으로 표현, unsigned 
	// %f : 값을 실수형으로 표현
	// %x, %X: 값을 16진수로 표현 
	// %o : 값을 8진수로 표현 
	// %e : 값을 지수형으로 표현
	// %c : 값을 문자로 표현 

	n = 'A';  //ascii 아스키코드로 n = 65! 
		printf("n을 문자로 표현 : %c\n", n);

	//10
	printf("숫자의 출력:%5d\n", 10);   //정수를 출력할 때 자릿수 5칸을 확보한 뒤 오른쪽 정렬하여 출력
	printf("숫자의 출력:%-5d\n", 10);   //정수를 출력할 때 자릿수 5칸을 확보한 뒤 왼쪽 정렬하여 출력

	printf("실수의 출력:%6.2f", 180.78); // 소수점을 포함하여 6자리를 확보한 뒤 소수점 이하를 두 자리까지만 표현
	printf("실수의 출력: %.2f", 1245652381768437659.2534); //정수부를 그대로 출력하고 소숫점 두 자리까지만 표현한다.




	n = 10;
	big_number = 123456789;
	score = 12345;

	//기본 : %d는 int 크기에 기본적으로 맞춰져있음 
	printf("%d\n", score);

	printf("%hd\n", num); // short 형 출력

	printf("%hhd\n", num);  //char 형 출력

	printf("%ㅣd\n", num); //long 형 출력

	printf("%lld\n", big_number); // long long 형 출력 

	unsigned char age;   // 0~255 까지 표현(저장) 가능하다!(음수로는 내려갈 수 없음) char 말고도 long long 모두  unsigned가 앞에 붙는다
	age = 80;
	printf("%hhu\n", score);

	unsigned long lsize = 987654321;
	printf("%llu\n", sizeof(long long));

	/*
	%d와 %u의 세분화
	%hhd(u), %hd, %d(u), %ld(u), %lld(u)
	
	
	*/

	return 0;
}

