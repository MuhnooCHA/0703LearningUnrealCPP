#pragma once
#include <string>

class Transitiona
{
public:
	Transitiona();

	Transitiona(int InCurrentState, std::string Condition, int InNextState);
	virtual ~Transitiona();

	int CurrentState;
	std::string Condition;
	int NextState;
};

