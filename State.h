#pragma once
#include <string>

using namespace std;
class State
{
public:
	State(); // Alt + Enter -> �Լ� ���� �ڵ� ����. �ҽ� ���Ͽ� ������
	State(int InID, string InStateName);
	virtual ~State(); // �Ҹ��ڿ� virtual ��������� Ŭ������ �⺻ ���

	int ID;
	string StateName;
};

