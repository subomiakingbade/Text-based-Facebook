/********* definitions.c ********
	Student Name 	=
	Student Number	=
*/

#include "data_structures.h"
#include "functions.h"
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

/******** IMPORTANT: ********/
/* YOU ARE NOT ALLOWED TO CREATE EXTRA FUNCTIONS */



/*
   The function adds a new node to the head with the given value.
*/
void add_at_head(my_collection_t *coll, char value)
{
	node_t *p = malloc(sizeof(node_t));
	p -> elem = value;

	coll -> head = p;










	/* The computational time for the function is:
		Explanation:



	*/
}

/*
   The function removes a node from the tail and returns the value. If the collection is empty, it returns '\0'.
*/
char remove_from_tail(my_collection_t *coll)
{
	char last_node;
	if (coll = NULL){
		printf("\0");
	} else{
		last_node = coll->tail;
		printf("&s", last_node);
		free(coll-> tail);
	}








	/* The computational time for the function is:
			Explanation:



	*/
}

/*
  Prints all the characters in the collection on the terminal.
*/
void print_elements(my_collection_t *coll)
{
	node_t *p = malloc(sizeof(node_t));
	while(coll != NULL){
		printf("%s", p-> elem);
		p->next;
	}
	/* The computational time for the function is:
			Explanation:



	*/
}

/*
   Removes all the elements from the collection. Your implementation
   for this function is not allowed to called remove_from_tail
*/
void empty_my_collection(my_collection_t *coll)
{
	node_t *p = malloc(sizeof(node_t));
	while (coll != NULL){
		free (p);
		p-> next;
	}






}

/*
   *************** DON'T MODIFY THIS FUNCTION ****************
   Function create the collection that will be used in the exam
*/
my_collection_t *create_collection()
{
	my_collection_t *coll = malloc(sizeof(my_collection_t));
	assert(coll != NULL);
	coll->head = NULL;
	coll->tail = NULL;
	return coll;
}
