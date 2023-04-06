#include <stdio.h> //우선 { } 의 역할은 중괄호 { } 안의 코드들을 묶어주는 역할을 한다.
void main() //void는 메모리를 차지하지 않기 때문에 void 타입의 변수는 선언이 불가,중괄호 '{'로 시작하여 '}'로 끝난다
{
	printf("char 의 크기는 %d 바이트./n", sizeof(char)); //char 의 크기는 1 바이트 입니다
	printf("unsigned char 의 크기는 %d 바이트./n", sizeof(unsigned char)); //unsigned char 의 크기는 1 바이트 입니다
	printf("short 의 크기는 %d 바이트./n", sizeof(short)); //short의 크기는 2 바이트 입니다
	printf("unsigned short 의 크기는 %d 바이트./n", sizeof(unsigned short)); //unsigned short의 크기는 2 바이트 입니다
	printf("int 의 크기는 %d 바이트./n", sizeof(int)); //int의 크기는 4 바이트 입니다
	printf("unsigned int 의 크기는 %d 바이트./n", sizeof(unsigned int)); //unsigned int의 크기는 4 바이트 입니다
	printf("long 의 크기는 %d 바이트./n", sizeof(long)); //long의 크기는 4 바이트 입니다
	printf("unsigned long 의 크기는 %d 바이트./n", sizeof(unsigned long)); //unsigned long의 크기는 4 바이트 입니다
	printf("float 의 크기는 %d 바이트./n", sizeof(float)); //float의 크기는 4 바이트 입니다
	printf("double 의 크기는 %d 바이트./n", sizeof(double)); //double의 크기는 8 바이트 입니다
}