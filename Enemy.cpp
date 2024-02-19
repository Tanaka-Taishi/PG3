#include"Enemy.h"
#include <stdio.h>
#include <Windows.h>


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

void (Enemy::* Enemy::pPhaseTable[])() = {
	&Enemy::Approach,//0
	&Enemy::Shot,	 //1
	&Enemy::Leave,	 //2
};

void Enemy::Approach() {
	printf("Ú‹ß\n");
	PFunc p;
	p = DispResult;
	setTimeout(p, 3);
	phase_ = Phase::kShot;
}


void Enemy::Shot() {
	printf("ŽËŒ‚\n");
	PFunc p;
	p = DispResult;
	setTimeout(p, 3);
	phase_ = Phase::kLeave;
}

void Enemy::Leave() {
	printf("—£’E\n");
}

void Enemy::Update() {

	(this->*pPhaseTable[static_cast<size_t>(phase_)])();

	/*switch (phase_) {

	case Phase::kApproach:
		Approach();
		//break;

	case Phase::kShot:
		Enemy::Shot();
		break;

	case Phase::kLeave:
		Enemy::Leave();
		break;
	}*/

	//for (int i = 0; i < 3; i++) {
	//	PFunc p;
	//	p = DispResult;
	//	setTimeout(p, 3);
	//}


	//Phase::kApproach;
	//Approach();
	
	//Phase::kShot;
	//Enemy::Shot();
	
	//Phase::kLeave;
	//Enemy::Leave();

	/*PFunc p;
	p = DispResult;
	setTimeout(p, 3);
	(this->*pPhaseTable[1])();
	p = DispResult;
	setTimeout(p, 3);
	(this->*pPhaseTable[2])();*/
}