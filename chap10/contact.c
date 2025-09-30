#include <stdio.h>

/*struct contact
{
	char name[20];
	char phone[20];
	int ringtone;
};

typedef struct contact Contact;*/

/*typedef struct contact
{
	char name[20];
	char phone[20];
	int ringtone;
} Contact;*/

#include "contact.h"

Contact list = { 0 };

int main()
{
	Contact NA = { "NA", "010-2749-7163", 1 };
	Contact NA2 = { 0 };

	NA2 = NA;
	// NA2 = { "NA", "010-2749-7163", 1 };		// ¿¡·¯
	NA2.ringtone = 1;

	return 0;
}