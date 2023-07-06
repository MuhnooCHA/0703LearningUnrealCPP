#pragma once
#include <string>

using namespace std;
class State
{
public:
	State(); // Alt + Enter -> 함수 정의 자동 생성. 소스 파일에 생성됨
	State(int InID, string InStateName);
	virtual ~State(); // 소멸자와 virtual 여기까지가 클래스의 기본 모양

	int ID;
	string StateName;
};

