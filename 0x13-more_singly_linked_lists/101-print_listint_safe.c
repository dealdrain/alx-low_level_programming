#include "lists.h"

/**
 * print_listint_safe - Print a linked list
 * @head: head.
 * Return: number of nodes in list. Otherwise exit
 */

size_t print_listint_safe(const listint_t *head)
{
        const listint_t *now;
        size_t x;
        const listint_t *a;

        now = head;
        if (now == NULL)
                exit(98);

        x = 0;
        while (now != NULL)
        {
                a = now;
                now = now->next;
                x++;
                printf("[%p] %d\n", (void *)a, a->n);

                if (a < now)
                {
                        printf("-> [%p] %d\n", (void *)now, now->n);
                        break;
                }
        }

        return (x);
}
