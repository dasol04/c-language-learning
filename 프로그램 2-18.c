#include <stdio.h> //우선 { } 의 역할은 중괄호 { } 안의 코드들을 묶어주는 역할을 한다.
void main() //void는 메모리를 차지하지 않기 때문에 void 타입의 변수는 선언이 불가,중괄호 '{'로 시작하여 '}'로 끝난다
{
	int ch1, ch2, ch3; //3개의 문자를 입력받기 위하여 ch1과 ch2, ch3 3개의 문자형 변수를 선언한다
	
	printf("세개의 글자를 입력하세요/n"); //세개의 글자를 하나 입력하세요
	scanf("%c%c%c", &ch1, &ch2, %ch3); //wxy
	printf("입력하신 글자는 %c 와 %c 와 %c 입니다/n", ch1,ch2,ch3); //입력하신 글자는 w 와 x 와 y 입니다
}