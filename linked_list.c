
// linked_list.c
//
/*  Define structure to represent a node in a linked list.*/
struct node
{
    //creating the two fields needed for each node
   int data;
   struct node *link;
};
/*-------------------------------------------------------------*/
/*  This function returns a value of one if the linked list    */
/*  is empty.                                                  */

int empty(struct node *head)
{
    int i = 0;
    int e = 1;
    //checks if head is pointing to null, which would mean the node is empty
    if (head = NULL)
    {
        printf("The list is empty.");
        return e;
    }
    //if head is not pointing to empty node, it returns nothing
    return i;
}

/*-------------------------------------------------------------*/
/*  This function prints a linked list.                        */

void print_list(struct node *head)
{
    struct node *next = head;
    //checks if pointer is pointing to empty node
    if (empty(next))
    {
        printf("This is empty.\n");
    }
    //if not, iterates through list and prints value being pointed at as iterating
    printf("List values:\n");
    while (next != NULL)
    {
        printf("%d\n", next -> data);
        //to go to next node to print
        next = next -> link;
    }
}

/*-------------------------------------------------------------*/
/*  This function inserts a new node in a linked list.         */

void insert(struct node **ptr_to_head, struct node *nw)
{
    //checks if pointing to empty node
    if (empty(*ptr_to_head))
    {
        *ptr_to_head = nw;
    }
    //if not, will insert value as node into list
    else
    {
        //creates new pointer called next
        struct node* next = *ptr_to_head;
        //while next is not null(not at the end of list) and next node data is less than entered value
        while (next -> link != NULL && next -> link -> data < nw -> data)
        {
            //go to next node and check above parameters again
            next = next -> link;
        }
        //once nw value is less than next value, insert nw value into list
        nw -> link = next -> link;
        next -> link = nw;
    }
}
/*------------------------------------------------------------*/
/*  This function deletes a node form a linked list.          */

void delete(struct node **ptr_to_head, int old)
{
    struct node *prev = NULL;   //creates new node pointer that points to previous
    struct node *new_node = *ptr_to_head;   //set new_node to ptr
    //while new data is not null or the old data
    while (new_node != NULL && new_node -> data != old)
    {
        //previous points to new node
        prev = new_node;
        //new node points to next
        new_node = new_node -> link;
    }
    //checks if previous has a value
    if (prev == NULL)
    {
        return;
    }
    //checks if new node is set to ptr_to_head pointer
    if (new_node == *ptr_to_head)
    {
        //moves pointer to next link
        *ptr_to_head = (*ptr_to_head) -> link;
    }
    //if not, previous goes to link and new node goes to the next link
    else
    {
        prev -> link = new_node -> link;
    }
    //frees up memory that was allocated for the node
    free(new_node);
}
