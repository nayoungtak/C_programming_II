
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"

//extern int get_id();
//extern int last_id;


int main(int argc, char* argv[])
{
	printf("추석 잘 보냈어요?\n");

	for (int i = 0; i < 3; i++) {
		printf("회원%d의 id = %d\n",i+1 , get_id());
	}

	//printf("last_id = %d", last_id++);

	return 0;
}