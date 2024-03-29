#ifndef LIST_H
#define LIST_H

/**
 * listint_t - typedef from struct listint_s
 */
typedef struct listint_s listint_t;

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to new node
 * listint - after typedef
 * Description: singly linked list node structure
 *
 */

struct listint_s
{
	int n;
	struct listint_s *next;
};

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head,
unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
void free_listint2(listint_t **head);

#endif
