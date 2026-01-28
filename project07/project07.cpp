#define _CRT_SECURE_NO_WARRNINGS
#include <stdio.h>

// do ~ while();
//반복문안의 명령문들을 적어도 한 번은 실행한다.
// while () 뒤에 반드시 ;(세미콜론)을 붙여준다.


int main()
{
    int i = 10;
    char ch, tmp;
    do {

        printf("1. 새 파일\n");
        printf("2. 저장\n");
        printf("3. 열기\n");
        printf("4. =================\n");
        printf("x. 종료\n");

        printf("\n 메뉴를 선택해주세요 : ");
        scanf_s("%c", &ch);             //문자 1로 인식됨 
        scanf_s("%c", &tmp);            // 엔터키값을 입력버퍼로부터 제거시킴


        switch (ch)
        {
        case'1':
            printf("\n새 파일이 선택되었습니다.\n");
        case'2':
            printf("\n저장이 선택되었습니다.\n");
        case'3':
            printf("\n열기가 선택되었습니다.\n");
        case 'x':
            break;

        default:
            printf("\n 잘못입력하였습니다. 다시 입력해주세요.\n");
            break;
        }



        // if (ch == '1')

       //  else if (ch == '2')

         //else if (ch == '3')

       // else



    } while (ch != 'x');

    //printf("프로그래밍이 종료되었습니다.");


    return 0;
}


