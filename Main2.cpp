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
	States[2] = State(1, "�߰�");
	States[3] = State(1, "����");
	States[4] = State(1, "����");

	vector<Transitiona> Transitions;

	Transitions.push_back(Transitiona(1, "���߰�", 2));
	Transitions.push_back(Transitiona(2, "����ħ", 1));
	Transitions.push_back(Transitiona(2, "�����Ÿ�����", 3));
	Transitions.push_back(Transitiona(3, "�����Ÿ���Ż", 2));
	Transitions.push_back(Transitiona(3, "HP����", 4));
}