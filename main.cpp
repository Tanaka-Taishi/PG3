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

	printf("奇数か偶数かを予想する、偶数なら　０，奇数なら　1　を入力してください ");
	scanf_s("%d", &userAnswer);

	PFunc p;
	p = DispResult;
	setTimeout(p, 3);

	if (userAnswer == Answer) {
		printf("正解\n");
	}
	else if (userAnswer != Answer) {
		printf("不正解\n");
	}

	return 0;
}