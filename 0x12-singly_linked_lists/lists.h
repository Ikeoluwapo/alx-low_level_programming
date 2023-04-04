#ifndef _LISTS_H_
#define _LISTS_H_

/**
 * list_t - new name after typedef
 *
 *
 */

typedef struct list_s list_t;

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
};

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
void free_list(list_t *head);

#endif
