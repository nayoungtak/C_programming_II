
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"

//extern int get_id();
//extern int last_id;


int main(int argc, char* argv[])
{
	printf("�߼� �� ���¾��?\n");

	for (int i = 0; i < 3; i++) {
		printf("ȸ��%d�� id = %d\n",i+1 , get_id());
	}

	//printf("last_id = %d", last_id++);

	return 0;
}