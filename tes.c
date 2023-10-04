#include <stdio.h>

int main() {

	int m = 29 ;
	int* ptr =&m;
	printf(" Address of m :%p \n" , (void *)ptr);
	printf(" Value of m :%d \n \n" , *ptr);

	//Now ab is assigned with the address of m.
	int* ab = ptr;
	printf(" Address of pointer ab :%p \n" , (void *)ab);
	printf(" content of pointer ab :%d \n \n" , *ab);

	// The value of m assigned to 34 now.
	m = 34;
	ab = &m;  // reassign is preferable
	printf(" Address of pointer ab :%p \n" , (void *)ab);
	printf(" content of pointer ab :%d \n \n" , *ab);

	//The pointer variable ab is assigned with the value 7 now.
	*ab = 7;
	// both gives same answer

	printf(" Address of m :%p \n" , (void *)ptr);
	printf(" Value of m :%d \n \n" , *ptr);

	printf(" Address of m :%p \n" , &m);
	printf(" Value of m :%d \n \n" , m);



    return 0;
}
