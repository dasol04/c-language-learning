#include <stdio.h> //우선 { } 의 역할은 중괄호 { } 안의 코드들을 묶어주는 역할을 한다.
void main() //void는 메모리를 차지하지 않기 때문에 void 타입의 변수는 선언이 불가,중괄호 '{'로 시작하여 '}'로 끝난다
{
	char a, b, c; //문자형 변수의 자료형은 char이고, 문자 1개당 크기는 1byte 단위의 처리를 수행한다

	a = 'A'; //정수 'A'을 a에 대입한다
	b = 'a'; //정수 'a'을 b에 대입한다
	c = 'z'; //정수 'Z'을 c에 대입한다

	printf("문자형 변수에 저장된 값은 %c %c %c 입니다/n", a, b, c); //문자형 변수에 저장된 값은 A a Z 입니다
}