#include "lists.h"

/**
 *  * check_cycle - checks if a singly linked list has,
 *   * a cycle in it.
 *    * @list: pointer to the list.
 *     * Return: 0 if there is no cycle,
 *      * 1 if there is a cycle
 *       */
int check_cycle(listint_t *list)
{
listint_t *slow_ptr;
listint_t *fast_ptr;
slow_ptr = list;
fast_ptr = list;

while (list && fast_ptr && fast_ptr->next)
{
list = list->next;
fast_ptr = fast_ptr->next->next;
if (list == fast_ptr)
{
list = slow_ptr;
while (1)
{
fast_ptr = slow_ptr;
while (fast_ptr->next != list && fast_ptr->next != slow_ptr)
{
fast_ptr = fast_ptr->next;
}
if (fast_ptr->next == list)
break;
list = list->next;
}
return (1); // Cycle detected, return 1
}
}
return (0); // No cycle detected, return 0
}
