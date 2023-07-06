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
	States[2] = State(1, "배회");
	States[3] = State(1, "배회");
	States[4] = State(1, "배회");

	vector<Transitiona> Transitions;

	Transitions.push_back(Transitiona(1, "적발견", 2));
}