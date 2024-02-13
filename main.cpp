#include"Enemy.h"
#include <stdio.h>
#include <Windows.h>

void (Enemy::* Enemy::pPhaseTable[])() = {
	&Enemy::Approach,//0
	&Enemy::Shot,	 //1
	&Enemy::Leave,	 //2
};

void Enemy::Init() {
	//pFunc = &Enemy::TestFunc;
}

typedef void(*PFunc)(int*);

void DispResult(int* s) {

}
void setTimeout(PFunc p, int second) {
	Sleep(second * 1000);
	p(&second);
}

void Enemy::Update() {
	switch (phase_) {

	case Phase::kApproach:
		Approach();
		break;

	case Phase::kShot:
		Enemy::Shot();
		break;

	case Phase::kLeave:
		Enemy::Leave();
		break;
	}

	(this->*pPhaseTable[0])();
	PFunc p;
	p = DispResult;
	setTimeout(p, 3);
	(this->*pPhaseTable[1])();
	p = DispResult;
	setTimeout(p, 3);
	(this->*pPhaseTable[2])();
}

void Enemy::Approach() {

	printf("Ú‹ß\n");
}

void Enemy::Leave() {

	printf("—£’E\n");
}

void Enemy::Shot() {

	printf("ËŒ‚\n");
}