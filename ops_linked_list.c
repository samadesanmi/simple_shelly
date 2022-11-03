#include "functions.h"
/**
 * add_node_at_end - add a new node to linked list.
 * @head: head of the linked list.
 * @str: string to copy and add to linked list.
 *
 * Return: pointer to new node created.
 */
list_t *add_node_at_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	temp = *head;
	new->str = _strdup(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (new);
}
/**
 * add_node_list_env - add a new at the end of a linked list made up enviroment
 * variables.
 * @head: head of the linked list.
 * @str: string formed by enviroment variable and its value.
 *
 * Return: pointer to new node added.
 */
env_t *add_node_list_env(env_t **head, char *str)
{
	env_t *new, *tmp;
	char *token_1, *token_2;

	token_1 = strtok(str, "=");
	token_2 = strtok(NULL, "\0");
	new = malloc(sizeof(env_t));
	if (!new)
		return (NULL);
	tmp = *head;
	new->key = _strdup(token_1);
	new->value = _strdup(token_2);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
/**
* free_list - free a linked list.
 * @head: head of the linked list to free.
 *
 * Return: nothing.
 */
void free_list(list_t *head)
{

	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
/**
* free_list_env - free a linked list made up by two members.
 * @head: head of the linked list to free.
 *
 * Return: nothing.
 */
void free_list_env(env_t *head)
{
	while (head != NULL)
	{
		free(head->key);
		free(head->value);
		free(head);
		head = head->next;
	}
}
/**
 * free_array - free a arry of string.
 * @arr: array of strings.
 *
 * Return: nothing.
 */
void free_array(char **arr)
{
	int i = 0;

	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
