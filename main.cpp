#include <stdio.h>
#include <Windows.h>
#include<time.h>
#include<functional>

typedef void(*PFunc)(int*);

void DispResult(int* s) {

}
void setTimeout(PFunc p, int second) {
	Sleep(second * 1000);
	p(&second);
}

int main(int argc, const char* argv[]) {


	srand((unsigned int)time(nullptr));

	std::function<int(int)> fx = [](int i) {return i + 1; };
	auto fx2 = [=](int i) {return i + 1; };

	int userAnswer = 0;
	int Answer = 0;

	Answer = fx(rand() % 6) % 2;

	printf("�����������\�z����A�����Ȃ�@�O�C��Ȃ�@1�@����͂��Ă������� ");
	scanf_s("%d", &userAnswer);

	PFunc p;
	p = DispResult;
	setTimeout(p, 3);

	if (userAnswer == Answer) {
		printf("����\n");
	}
	else if (userAnswer != Answer) {
		printf("�s����\n");
	}

	return 0;
}