#include "Transitiona.h"

inline Transitiona::Transitiona() : CurrentState(0), Condition(""), NextState(0) // ����鼭 �ʱ�ȭ
{
	// ���⿡�� �ʱ�ȭ �ϸ� �����ϸ鼭 �ʱ�ȭ
}

Transitiona::Transitiona(int InCurrentState, std::string Condition, int InNextState)
{
}

Transitiona::~Transitiona()
{
}
