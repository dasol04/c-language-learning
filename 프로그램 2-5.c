#include <stdio.h> //우선 { } 의 역할은 중괄호 { } 안의 코드들을 묶어주는 역할을 한다.
void main() //void는 메모리를 차지하지 않기 때문에 void 타입의 변수는 선언이 불가,중괄호 '{'로 시작하여 '}'로 끝난다
{
	int age, height, muge; //정수형 변수 age를 선언하고 숫자라는 값,정수형 변수 height를 선언하고 숫자라는 값,정수형 변수 muge를 선언하고 숫자라는 값
	double j, k; //실수형을 선언한 것과 마찬가지인 결과가 나타납니다

	age = 20; //정수형 변수 age를 선언하고 20라는 값을 넣어준다
	height = 180; //정수형 변수 height를 선언하고 180라는 값을 넣어준다
	muge = 70; //정수형 변수 muge를 선언하고 70라는 값을 넣어준다

	j = 3.5; //3.5처럼 간단해보이는 소수도 2진법으로 나타내면 무한 소수
	k = 0.72825; //소수점 절삭으로 인한 오차

	printf("나이는 %d 키는 %d 몸무게는 %d 입니다/n", age, height, muge); //나이는 20 키는 180 몸무게는 70 입니다
	printf("실수형 데이터 %f 와 %f 그리고 문자 %c/n", j, k, p); //실수형 데이터 3.500000 와 0.728250 그리고 문자 A
}