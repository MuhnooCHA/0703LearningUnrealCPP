#include <iostream>
using namespace std;

class EnemyState
{
	int ID;
	char State;
};

class Transition
{
	int CurrentState;
	int NextState;
	char Condition;
};

int main()
{
	EnemyState Troll;
	Transition StateforEnemy;
}