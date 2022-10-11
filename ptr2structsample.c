#include <stdio.h>
#include <stdlib.h>

/**
 * User: is a structure that hold a user's details
 * @name: users name
 * @email: user's email address
 * @age: User's current age
 */
struct User
{
	char *name;
	char *email;
	int age;
};
/**
 * new_user: is a structure function that sets a user's details
 * @name: users name
 * @email: user's email address
 * @age: User's current age
 * returns: a structure pointer
 */
struct User *new_user(char *name, char *email, int age)
{
	struct User *user;

	(*user).name = name;
	(*user).email = email;
	(*user).age = age;

	return user;
}

/**
 * main: program entrypoint
 * return: 0 on success
 */
int main(void)
{
	struct User *user;

	user = new_user("Foo", "foo@foo.bar", 98);

	if (user == NULL)
		return (1);

	printf("User %s created !\n", user->name);
	printf("His email is: %s \n", user->email);
	printf("And he is %d years old\n", user->age);

	return (0);
}
