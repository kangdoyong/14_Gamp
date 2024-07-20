
// 아래에 제시한 클래스를 만들고,
// main에서 인스턴스를 생성한 뒤, 제시된 기능들을 실행시켜주세요.

// 클래스 이름 AirConditioner

// 필드
// 전원 on/off 표현할 필드
// 온도를 표현할 필드 (정수)

// 인스턴스를 생성한 후, 필드가 가질 초기값
// 전원 : 꺼짐
// 온도 : 22도

// 메서드
// 전원 on/off 기능 (전원 값 변경 시, 변경된 값을 출력)
// 온도를 설정하는 기능 (내가 원하는 온도)
// 현재 온도에서 1도 증가시키는 기능
// 현재 온도에서 1도 감소시키는 기능
// 현재 온도를 출력하는 기능

// 인스턴스 생성 후, 호출할 기능들
// 전원 on
// 온도 18도 설정
// 온도 1도 증가
// 온도 1도 감소
// 전원 off
// -> 온도가 변경될 때마다, 현재 온도 출력

#include "AirConditioner.h"

void main()
{
	AirConditioner* ac = new AirConditioner();

	// 초기값 설정
	ac->SetPower(false);
	ac->SetTemp(22);

	ac->SetPower(true);
	ac->SetTemp(18);
	ac->UpTemp();
	ac->DownTemp();
	ac->SetPower(false);

	delete ac;
	ac = nullptr;
}