#include <iostream>
using namespace std;

//			Hello World!			//
//void main()
//{
//	cout << "Hello World!" << endl;
//}

//			cout, cin			//
//void main()
//{
//	cout << "이름을 입력하세요!" << endl;
//
//	char name[256];
//	cin >> name;
//
//	cout << name << "님 C++ 세계에 오신것을 환영합니다!" << endl;
//
//}


//			전처리기			//

//#define PI	3.141592
//void main() 
//{
//	double d = PI;
//
//	cout.precision(10);
//	cout << "PI is " << PI << endl;
//}

//#define MULTIPLY(x, y) x + y
//void main() 
//{
//	//사칙연산 우선순위 주의
//
//	// 1+1 * 1+2 = 4
//	cout << MULTIPLY(1 + 1, 1 + 2) << endl;
//
//	// 1+1 * 1+2 / 1+1 * 1+2 = 7
//	cout << MULTIPLY(1 + 1, 1 + 2) / MULTIPLY(1 + 1, 1 + 2) << endl;
//}

//void main() 
//{
//	cout << __FILE__ << endl; //파일 위치
//	cout << __LINE__ << endl; //코드 내 라인 위치
//	cout << __FUNCTION__ << endl; //현재 함수

//윈도우 운영체제 비트 값
//#ifdef _M_X64
//	cout << "64Bit x64 Windows" << endl;
//#else
//	cout << "32Bit x64 Windows" << endl;
//#endif
//
//}


//			int 변수			//
//void main()
//{
//	int num1, num2, sum;
//
//	cout << "첫 번째 숫자 입력: ";
//	cin >> num1;	
//	cout << "두 번째 숫자 입력 : ";
//	cin >> num2;	
//	
//	sum = num1 + num2;
//	cout << "두 숫자의 합 " << sum;
//}

//			const, unsigned			//
//void main()
//{
//	const unsigned int pennyValue=1, nickelValue=5, dimeValue=10, quarterValue=35, dollarValue=100;
//	unsigned int pennies, nickels, dimes, quarters, dollars;
//	unsigned long totalValue;
//
//	cout << "페니의 수: ";
//	cin >> pennies;
//	cout << "니켈의 수: ";
//	cin >> nickels;
//	cout << "다임의 수: ";
//	cin >> dimes;
//	cout << "쿼터의 수: ";
//	cin >> quarters;
//	cout << "달러의 수: ";
//	cin >> dollars;
//
//	totalValue = pennies * pennyValue + nickels * nickelValue + dimes * dimeValue + quarters * quarterValue + dollars * dollarValue;
//	cout << "전체 값은 " << totalValue << "페니 입니다." << endl;
//}


//			Float			//

//void main() 
//{
//	cout << fixed;
//	cout.precision(4);	
//
//	float f1 = 8388608.0;
//	cout << f1 << endl;
//
//	float f2 = 8388608.5;
//	cout << f2 << endl;
//
//	float f3 = 8388608.6;
//	cout << f3 << endl;
//
//	float f4 = 8388609.0;
//	cout << f4 << endl;
//}

//void main()
//{
//	cout << fixed;
//	cout.precision(0);
//
//	float f = 67108864 + 4;
//	cout << f << endl;
//
//	__int64 i64 = 67108864 + 4;
//	cout << i64 << endl;
//}

//			char			//
//void main()
//{
//	//ASCII Code A:65 B:66
//	char c1 = 'A', c2 = 65, c3 = 'A' + 1, c4 = 66;
//	cout << c1 << c2 << c3 << c4 << endl;
//}




