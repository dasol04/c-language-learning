#include <stdio.h> //우선 { } 의 역할은 중괄호 { } 안의 코드들을 묶어주는 역할을 한다.
void main() //void는 메모리를 차지하지 않기 때문에 void 타입의 변수는 선언이 불가,중괄호 '{'로 시작하여 '}'로 끝난다
{
	float a = 3.14; // 자료형을 기준으로 가장 앞 1비트는 부호를 나타내는 부호부,그 다음 8비트 공간은 2의 몇 승인지의 지수를 나타내는 지수부,뒤의 23비트 공간은 앞에 얼마가 곱해질지를 고르는 가수부입니다.
		double b = 0.0002754; //소수점 절삭으로 인한 오차
	
	printf("a의 값은 소수형태로 %f 지수 형태로 %e/n", a, a); //a의 값은 소수형태로 3.140000 지수 형태로 3.140000e+000
	printf("b의 소수형형태로 %f 지수 형태로 %e/n", b, b)//b의 값은 소수형태로 0.000275 지수 형태로 2.754000e+004
}