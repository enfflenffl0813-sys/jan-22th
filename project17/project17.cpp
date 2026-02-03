
#include <stdio.h>

void display_array()
{

}



int main()
{
	int* p;        //8byte
	char* sz;      // 

	int arr[100];                       // 400byte // 배열명은 주소 그 자체이다.
	printf("arr[0]의 주소 : %p\n", &arr[0]);         //arr[0]의 주소로 해야해서 &을 붙여야함.
	printf("arr의 주소 : %p\n", arr);
	printf("arr[1]의 주소 : %p\n", &arr[1]);

	p = arr;    // arr= p; 이건 안됨. arr은 그냥 주소 그 자체
	

	for (int i = 0; i < 100; i++)
	{
		arr[i] = i + 1;
	}

	printf("arr[5] = %d\n", arr[5]);
	printf("p[5] = %d\n", p[5]);


	return 0;
}
