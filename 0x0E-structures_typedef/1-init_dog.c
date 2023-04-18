#include <stdlib.h>
	#include "dog.h"


	/**
	 * init_dog - variable type for dog struct
	 * @d: pointer to struct dog
	 * @name: name to initialize
	 * @age: age to initialize
	 * @owner: owner to initialize
	 */
	void init_dog(struct dog *doggy, char *name, float age, char *owner)
	{
		if (doggy == NULL)
			d = malloc(sizeof(struct dog));
		doggy->name = name;
		doggy->age = age;
		doggy->owner = owner;
	}
