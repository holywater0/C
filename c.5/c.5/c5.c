

//씹어먹는 c 7-4번 문제 1000000 이하의 피보나치 수열 ( N 번째 항이 N - 1 번째 항과 N - 2 번째 항으로 표현되는 수열, 시작은 1,1,2,3,5,8,...) 의 짝수 항들의 합을 구한다.
#include <stdio.h>
main()
{
	int a = 1, b = 0, c, d = 0;
	while (a < 1000000) {
		{
			c = a;
			a += b;
			b = c;
		}
		if (a % 2 == 0) {
			d += a;
			printf("%d\n", d);
		}
	}
	printf("%d\n", d);
}

//씹어먹는 c 7-3번 문제 1000 이하의 3 또는 5 의 배수인 자연수들의 합을 구한다.
//깨닫게 된 거: for문 안에 있는 if에 break을 넣어도 for문에서 빠져나감. 그리고 if{continue}를 하면 그 if{continue} 밑에 있는게 스킵됨
//#include <stdio.h>
//main()
//{
//	int a=0, i, b=0, c=00, d= 0;
//	for (i = 1; i <= 1000; i++)
//	{
//		if (i % 3 == 0 || i % 5 == 0) d += i;
//		if (i % 3 == 0)
//		{
//			a += i;
//			c += i;
//		}
//		if (i % 5 == 0) {
//			b += i;
//			c += i;
//		}
//    }
//	printf("1000이하의 3또는 5의 배수인 자연수들의 합은 %d, %d, %d, %d입니다.", a, b, c, d  );
//}


/*씹어먹는 c 7-2번 문제 "7-1과 동일한 형태를 취하되, 역삼각형을 출력한다."*/
//#include <stdio.h>
//main()
//{
//	int s, n, l, b = 1;
//	//s = 별의 개수, n = 줄의 수,  b =  띄어쓰기 수
//	printf("원하는 역삼각형의 줄을 입력하시오. :");
//	scanf_s("%d", &n);
//	l = n - 1;//l = 줄 수의 -1
//	s = n + l;//줄 + 줄 수의 -1을 하면 역삼각형을 만들 수 있는 별의 개수를 딱 구할 수 있음
//	for (int e = 0;e < n; e++)//모든 줄을 완성할 때까지 실행
//	{
//		for(int i = 1; i <= s; i++)//주어진 별의 개수 만큼 실행
//		{
//			printf("*");//별 입력
//		}
//		s -= 2; //각 줄마다 위에서 아래로 한 줄 내려가면 별이 2개 줄어듦
//		printf("\n");//다음 줄로 이동
//		for (int a = 1; a <= b; a++)//주어진 띄어쓰기를 함
//		{
//			printf(" ");
//		}
//		b += 1;//다음 줄에서의 띄어쓰기를 1 늘림
//	}
//}


///*씹어먹는 c 7-1번 문제 "N 줄인 삼각형을 출력한다. 단, 사용자로 부터 임의의 N 을 입력 받는다."*/
//#include <stdio.h>
//main()
//{
//	int s, i, n, k, m;
//	k = 1;
//	i = 1;
//	s = 1;
//	printf("원하는 삼각형의 줄을 입력하시오.");
//	scanf_s("%d", &n); //삼각형의 줄을 입력 받음
//	m = n - 1; // s=띄어쓰기 수
//		while (k <= n)// 줄을 다 입력하면 이 조건이 충족되어 빠져나가며 끝남
//		{
//			while (i <= m)//삼각형을 만들 띄어쓰기를 주어진 만큼 다 쓴 뒤 끝나는 반복문
//			{
//				i++;
//				printf(" ");
//			}
//			i = 1;
//			while (i <= s)// m=printf로 입력해야하는 별의 개수 즉, 이 부분은 각 줄에 주어진 별을 만들기 위한 반복문
//			{
//				i++;
//				printf("*");
//			}
//			s += 2; // 피라미드 형태의 별을 만들기 위해서 필요함
//			printf("\n");//다음 줄로 이동
//			k++;//한 줄을 끝냈다
//			m -= 1;//삼각형의 형태를 만들기 위해서는 점차 띄어쓰기를 1개씩 덜 써야함
//			i = 1;//다시 돌아가서 두번째 while문(i <= s)을 재활용 하기 위한 거
//		}
//	return 0; // 다 끝나면 종료임
//}











/*첫 if문*/
//#include<stdio.h>
//main()
//{
//	int i;
//	for (i = 1; i < 10; i++)
//	{
//		printf("%d 번째 값은 %d \n", i, i);
//	}
//	return 0;
//}