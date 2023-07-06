#include "Transitiona.h"

inline Transitiona::Transitiona() : CurrentState(0), Condition(""), NextState(0) // 만들면서 초기화
{
	// 여기에서 초기화 하면 생성하면서 초기화
}

Transitiona::Transitiona(int InCurrentState, std::string Condition, int InNextState)
{
}

Transitiona::~Transitiona()
{
}
