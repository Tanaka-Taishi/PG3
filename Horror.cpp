#include "Horror.h"
#include <stdio.h>

Horror::Horror() {
	name = "�z���[";
}

Horror::~Horror() {

}

void Horror::InPut() {
	printf("%s��}��\n", name);
}

void Horror::PlayBack() {
	printf("%s���Đ�\n", name);
}