#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current_node, *prev_node;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return (-1);

    current_node = *head;

    if (index == 0)
    {
        *head = current_node->next;

        if (*head)
            (*head)->prev = NULL;

        free(current_node);
        return (1);
    }

    for (i = 0; current_node && i < index; i++)
    {
        prev_node = current_node;
        current_node = current_node->next;
    }

    if (current_node == NULL)
        return (-1);

    prev_node->next = current_node->next;

    if (current_node->next)
        current_node->next->prev = prev_node;

    free(current_node);

    return (1);
}
