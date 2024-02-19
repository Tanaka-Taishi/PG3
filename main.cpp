#include <stdio.h>
#include"Enemy.h"
#include <Windows.h>

int main(int argc, const char* argv[]) {
	Enemy enemy;
	//enemy.Init();
	for (int i = 0; i < 3; i++) {
		enemy.Update();
	}
	return 0;
}

