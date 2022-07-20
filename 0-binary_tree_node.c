#include "binary_trees.h"

/**
 * binary_tree_node - crée un nœud d'arbre binaire
 * @parent : pointeur vers le nœud parent du nœud à créer
 * @value : valeur à mettre dans le nouveau nœud
 *
 * Return: pointeur vers le nœud nouvellement créé
 * NULL en cas d'échec
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);
	(*newNode).n = value;
	(*newNode).parent = parent;
	(*newNode).left = NULL;
	(*newNode).right = NULL;
	return (newNode);
}
