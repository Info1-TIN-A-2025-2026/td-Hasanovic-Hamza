#include <stdio.h> // pour printf et scanf
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	unsigned char num_students = 23; // nombre d'etudiant dans la salle
	unsigned num_chairs = 32;		 // nombre de chaises dans la salle

	short delta = 0;

	delta = num_students - num_chairs; // la difference entre chaises et etudiants

	bool sw1 = true; // lampe du prof allumer
	bool sw2 = true; // lampe de la salle allumer

	unsigned char state = (sw2 << 4) + sw1;

	// printf
	// 		1 arg : format => string "hello"
	// 		=> combinaison "x=%d" format base 10
	// 		=> combinaison "x=%u" pour base 10 non signée

	printf("number of students = %d", num_students);										// nombre d'etudiant et de 23
	printf("number of students = %d, number of students = %d\n", num_students, num_chairs); // nombre de chaises - nombre d'etudiant

	printf("delta=%hd\n", delta);

	printf("sw1=%hd\n", sw1);
	printf("sw2=%hd\n", sw2);

	printf("state=%X (base 16)\n", state);
	printf("state=%d (base 10)\n", state);
	printf("state=%o (base 8)\n", state);

	char a = 'A';				   // ASCII code de 'A' = 65
	printf("a=%d (base 10)\n", a); // 65
	printf("a=%c (base 10)\n", a); // a=A

	char b = 112; // ASCII code de 'p'
	printf("b=%c (base 10)\n", b);

	return 0;
}
