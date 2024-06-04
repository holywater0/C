 /*가볍게 한 논리곱 연산자 실험*/
#include<stdio.h>
main()
{
    int a, b, c;
    printf("두 수를 입력하시오. :");
    scanf_s("%d %d", &a, &b);
    c = a > 8 && b > 8;
    printf("%d", c);
}

/*짜잔! 아래 문제를 성공적으로 해결했습니다~*/
/*씹c 6을 보면서 하고 있는데 스크롤을 좀 더 내리니 바로 다음에 설명해줌!*/
/* else if(조건식)을 하면됨! 왜 if를 바로 옆에 둘 생각을 못했을까.. */


/*if와 else*/ /*else 안에다가 if문 /또 넣기 ㅋㅋ*/
/*else에 ()열고 조건식으로 작동 되게 만들었더니 오류남 이유가 뭘까?*/
/*내가 생각하기에는 얘는 나머지만 처리하는 놈이기 때문에 조건식 만든답시고 ()여는건 안되는 듯?*/
//#include <stdio.h>
//main()
//{
//    int a;
//    printf("숫자를 입력하세요. : ");
//    scanf_s("%d", &a);
//    if (a == 7)
//    {
//        printf("행운의 숫자 7이군요!");
//    }
//    else{
//        if (a == 4)
//        {
//            printf("죽음의 숫자 4군요...");
//        }
//        else {
//            printf("평범한 숫자 %d군요.", a);
//        }
//    }
//  
//}
                                                           /* 크기 비교하기 */
//#include <stdio.h>
//int main() {
//    int i, j;
//
//    printf("크기를 비교할 두 수를 입력해 주세요 : ");
//    scanf("%d %d", &i, &j);
//
//    if (i > j)  // i 가 j 보다 크면
//    {
//        printf("%d 는 %d 보다 큽니다 \n", i, j);
//    }
//
//    if (i < j)  // i 가 j 보다 작으면
//    {
//        printf("%d 는 %d 보다 작습니다 \n", i, j);
//    }
//
//    if (i >= j)  // i 가 j 보다 크거나 같으면
//    {
//        printf("%d 는 %d 보다 크거나 같습니다 \n", i, j);
//    }
//
//    if (i <= j)  // i 가 j 보다 작거나 같으면
//    {
//        printf("%d 는 %d 보다 작거나 같습니다 \n", i, j);
//    }
//
//    if (i == j)  // i 와 j 가 같으면
//    {
//        printf("%d 는 %d 와(과) 같습니다 \n", i, j);
//    }
//
//    if (i != j)  // i 와 j 가 다르면
//    {
//        printf("%d 는 %d 와(과) 다릅니다 \n", i, j);
//    }
//
//    return 0;
//}

                                         /*합격? 아쉬워? 불합격?*/
//#include <stdio.h>
//main() {
//	int a;
//	printf("당신의 수학 점수를 입력하세요 :");
//	scanf_s("%d", &a);
//	if (a >= 90)
//	{
//		printf("축하합니다! 합격입니다!!!");
//	}
//	if (a == 89)
//	{
//		printf("으악!!!!!!!! 1점 차이로 실패하셨어요..");
//	}
//	if (a <= 88)
//	{
//		printf("불합격입니다.");
//	}
//
//}


                /*scanf에서 scanf("이 부분에서", &a ); float 형에서는 %f 로, double 형에서는 %lf 로 사용*/
            /*계산기에서 if문을 활용하여 ~를 0으로 나누려 할때 안되게 막는 방법*/
//#include <stdio.h>
//int main() {
//	double a, i;
//	printf("나눌 두 수를 입력하세요");
//	scanf_s("%lf %lf", &a, &i);
//	if (i == 0)
//	{
//		printf("이런! 0으로 나눌 수 없습니다!");
//		return 0;
//	}
//	printf("\n %lf / %lf = %lf", a, i, a / i);
//	return 0;
//}
