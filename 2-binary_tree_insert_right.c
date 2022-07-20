#include "binary_trees.h"

/**
 * binary_tree_insert_right - insère un nœud
 * en tant qu'enfant droit d'un autre nœud
 * @parent : pointeur vers le nœud dans lequel insérer le droit-enfant
 * @value : valeur à stocker dans le nouveau nœud
 *
 * Return: pointeur vers le nœud nouvellement créé
 * NULL en cas d'échec
 * NULL si le parent est NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	(*newNode).n = value;
	(*newNode).parent = parent;
	(*newNode).left = NULL;
	(*newNode).right = (*parent).right;
	(*parent).right = newNode;
	if ((*newNode).right)
		(*(*newNode).right).parent = newNode;
	return (newNode);
}
