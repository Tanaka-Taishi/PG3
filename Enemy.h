#pragma once
#include <stdio.h>

class Enemy {
public:
	void Init();

	void Update();

	void Approach();
	void Leave();
	void Shot();

private:

	enum class Phase {
		kApproach,
		kShot,
		kLeave,
	};

	Phase phase_ = Phase::kApproach;

	static void (Enemy::* pPhaseTable[])();
};
