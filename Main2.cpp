#include <iostream>
#include	 "State.h"
#include "Transitiona.h"
#include <map>
#include <vector>

using namespace std;

int main()
{
	map<int, State> States;
	States[1] = State(1, "��ȸ");
	States[2] = State(1, "��ȸ");
	States[3] = State(1, "��ȸ");
	States[4] = State(1, "��ȸ");

	vector<Transitiona> Transitions;

	Transitions.push_back(Transitiona(1, "���߰�", 2));
}