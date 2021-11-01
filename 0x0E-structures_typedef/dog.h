#ifndef DOGH
#define DOGH
/**
*struct dog -struct
*@name: member
*@age: member
*@owner: member
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
