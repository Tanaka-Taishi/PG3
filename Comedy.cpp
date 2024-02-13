#include "Comedy.h"
#include <stdio.h>

Comedy::Comedy() {
	name = "コメディー";
}

Comedy::~Comedy() {

}

void Comedy::InPut() {
	printf("%sを挿入\n", name);
}

void Comedy::PlayBack() {
	printf("%sを再生\n", name);
}
