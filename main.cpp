#include<stdio.h>

template<typename Type1, typename Type2>

class Box {
public:
	Type1 type1;
	Type2 type2;

	Box(Type1 type1, Type2 type2) :type1(type1), type2(type2) {}


	Type1 Min() {
		if (type1 < type2) {
			return type1;
		}
		else if (type1 > type2) {
			return type2;
		}
	}
};

int main() {
	Box<int, int> b1(10, 20);
	Box<float, float> b2(4.3f, 5.1f);
	Box<double, double> b3(1.2, 0.4);
	Box<float, int> b4(1.2f, 2);
	Box<double, float> b5(4.3, 5.1f);
	Box<double, int> b6(5.2, 3);
	/*printf("%d\n%f\n%lf\n", b1, b2, b3);*/
	printf("%d\n", b1.Min());
	printf("%f\n", b2.Min());
	printf("%lf\n", b3.Min());
	printf("%f\n", b4.Min());
	printf("%lf\n", b5.Min());
	printf("%lf\n", b6.Min());
	return 0;
}

//#include <stdio.h>
//
//int main(int argc, const char* argv[]) {;
//	return 0;
//}