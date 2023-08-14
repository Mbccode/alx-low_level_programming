#define "dog.h"

/**
 * print_dog - Entry point
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

	if (name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d.name);

	if (age == NULL)
		printf("Age: (nil)\n");
	else
		printf("Age: %d\n", d.age);

	if (owner == NULL)
	
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d.owner);
}
