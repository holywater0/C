
////소수 찾는 프로그램 1부터 1000까지
//#include<stdio.h>
//int main() 
//{
//	int arr[500]; //저장소가 500칸임
//	int i , a = 3, b = 1, c, w=0; // i=반복할 횟수, a=판별할 숫자, b=최고 저장소 칸, c=배열 수, w=나눠지는지 확인
//		arr[0] = 2;//첫 번째 소수는 2로 초기화(짝수는 소수가 될 수 없지만 2는 유일한 소수이기 때문이다.)
//		for (i = 1; i <= 1000; i++)//1~1000까지 반복
//		{
//			if (a % 2 != 0)//짝수는 소수가 될 수 없음('2' 제외)=>홀수만 검사
//			{
//				w = 0;//나눠지는지 확인을 초기화
//				for (c=0; c < b; c++)//현재 입주한 배열들의 칸들로 나눠보며 소수인지 판별
//				{
//					if (a % arr[c] == 0)//수를 다른 소수들로 나눠봄
//					{
//						w += 1;//소수들로 나눠졌다는 뜻
//					}
//				}
//				if (w == 0)//소수들로 나누어지지 않은 수일 때 작동 
//				{
//					arr[b] = a;//방을 배정해줌
//					b++;//새로운 입주방을 만듦(최고 저장소 칸을 만듦)
//				}
//			}
//			++a; //다음 수를 윗 과정을 해봄
//	    }
//		b--;//새로운 방을 만들고 입주한 사람이 없기에 방 폐쇄(변수에 저장된 값이 없음)
//		printf("0부터 1000까지의 숫자중 소수는 : ");//글자 입력
//		for(;b != -1;b--)//가장 큰 소수부터 차례대로 나열하게 끔 하는 반복문
//		{
//			printf(" %d,", arr[b]); //소수 입력
//		}
//		return 0;//종료
//}

//배열을 이용하여 평균을 구하는  프로그램 만들기
//#include <stdio.h>
//main()
//{
//	int arr[5]; //배열을 만듦(학생들의 성적을 입력 받을 변수들이 소속됨)
//	int i, o = 0; // i = 반복횟수, 배열 지정 수  o = 전체 학생의 평균
//	for (i = 0; i < 5; i++) // 다섯번 반복하라
//	{
//		printf("%d번째 학생의 성적을 입력하시오.", i + 1); //반복 횟수마다 몇번째가 늘어남
//		scanf_s("%d", &arr[i]);//위에 반복문이 반복되면서 arr(0~4까지 저장)
//	}
//	for (i = 0; i < 5; i++)// 다섯번 반복하라
//	{
//		o = o + arr[i]; // 'o'라는 변수에 아까전 입력받은 학생들의 성적들을 입력 받음
//	}
//	printf("전체 학생의 평균은 %d", o / 5); //학생들의 평균 계산(소수점 X)
//}


/*주의 사항
배열의 원소에 접근할 때에는 반드시 해당 원소의 위치가 배열의 크기 보다 작은지 확인하자.
*/ //->예를 들어 원소 위치가 배열의 크기 보다 크다면 배열 다음에 사용하던 방 주인(변수)의 값이 오류가 날 수 있기 때문이다

//배열을 정의할 때 = {} 로 원소들을 정의하고 배열의 크기를 생략하면 원소의 개수에 맞게 컴파일러가 알아서 배열을 정의해준다. 예를 들어서
//#include <stdio.h>
//main()
//{
//	int arr[] = { 1, 2, 3, 4 };        // 크기가 4 인 배열 정의
//	int arr2[] = { 1, 2, 3, 4, 5, 6 };  // 크기가 6 인 배열 정의
//}

//<배열 기초>
// []는 배열의 개수이다. 아래의 경우, arr[0]부터 1로 배정 받음.
//  
// <배열에서의 원소 접근>
// 배열의 n 번째 원소의 접근하기 위해서는 arr[n - 1] 와 같이 써 주면 된다. (대괄호 [] 안에 접근하고자 하는 원소의 (번째수 - 1)) 
//#include <stdio.h>
//int main() 
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, i;
//	i = arr[9];
//		printf("%d", i);
//	printf("Array 3 번째 원소 : %d \n ", arr[2]);
//	return 0;
//}