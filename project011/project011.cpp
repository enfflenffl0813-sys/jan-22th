
#include <stdio.h>

int main()
{
	//. for 반복문
	/*
	for(초기식 ; 조건식; 증감식 )
	{
	// 반복실행할 반복문
	}
	*/


	/*int i = 0;
	while (i < 10)
	{
		printf("i = %d\n", i);
		i++;
	}*/

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("i = %d\n", i);
	//}

	// for (반복진입하면서 처음에 무조건 한 번만 실행할 명령문;처음부터 매 반복시 실행될 명령문, 이 결과가 0이면 반복종료;
	//       1회 반복 이후 매 반복시 실핼될 명령문);

	for (int i = 0; i <=10;  i+= 2)
	{
		printf("%d\t", i);
	}


	// 2  4  6  8  10
	for (char ch = 'a'; ch <= 'z', ch++)
	{
		printf("%c", ch);

	}
	printf("\n");


	// z y x ... c b a
	for (char ch = 'z'; ch <= 'a', ch--)
	{
		printf("%c", ch-32);

	}
	printf("\n");
	return 0;
}

