#include "Horror.h"
#include <stdio.h>

Horror::Horror() {
	name = "ホラー";
}

Horror::~Horror() {

}

void Horror::InPut() {
	printf("%sを挿入\n", name);
}

void Horror::PlayBack() {
	printf("%sを再生\n", name);
}