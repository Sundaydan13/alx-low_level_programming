#include <stdio.h>
	#include <stdlib.h>
	#include "dog.h"


	/**
	 * print_dog - prints a struct dog
	 * @d: struct dog to print
	 */
	void print_dog(struct dog *doggy)
	{
		if (doggy == NULL)
			return;


		if (doggy->name == NULL)
			doggy->name = "(nil)";
		if (doggy->owner == NULL)
			doggy->owner = "(nil)";


		printf("Name: %s\nAge: %f\nOwner: %s\n", doggy->name, doggy->age, doggy->owner);
	}
