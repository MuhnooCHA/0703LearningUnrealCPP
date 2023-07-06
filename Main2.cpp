#include <iostream>
#include	 "State.h"
#include "Transitiona.h"
#include <map>
#include <vector>

using namespace std;

int main()
{
	map<int, State> States;
	States[1] = State(1, "배회");
	States[2] = State(1, "추격");
	States[3] = State(1, "접근");
	States[4] = State(1, "죽음");

	vector<Transitiona> Transitions;

	Transitions.push_back(Transitiona(1, "적발견", 2));
	Transitions.push_back(Transitiona(2, "적놓침", 1));
	Transitions.push_back(Transitiona(2, "사정거리접근", 3));
	Transitions.push_back(Transitiona(3, "사정거리이탈", 2));
	Transitions.push_back(Transitiona(3, "HP없음", 4));
}